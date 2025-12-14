#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9212671721984322050ULL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 5897468126726043911ULL;
unsigned char var_16 = (unsigned char)121;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-31;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
