#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3118115787U;
_Bool var_6 = (_Bool)0;
long long int var_7 = -7081783893147668230LL;
signed char var_10 = (signed char)-97;
unsigned int var_11 = 231788793U;
int zero = 0;
unsigned int var_13 = 1913944960U;
unsigned char var_14 = (unsigned char)240;
long long int var_15 = 1666642153621162916LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
