#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
signed char var_2 = (signed char)28;
long long int var_5 = 6887634628092889005LL;
long long int var_9 = -3225781281311368388LL;
signed char var_12 = (signed char)-31;
long long int var_15 = -7690359922818361442LL;
int var_17 = 1058870724;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 4039793235U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
