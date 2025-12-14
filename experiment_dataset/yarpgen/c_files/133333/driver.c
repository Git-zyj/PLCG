#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4117370435U;
_Bool var_8 = (_Bool)1;
unsigned int var_12 = 2566201308U;
unsigned int var_13 = 1631465194U;
int zero = 0;
unsigned int var_15 = 3187057294U;
unsigned char var_16 = (unsigned char)76;
unsigned int var_17 = 2652378861U;
long long int var_18 = 3406849258743881582LL;
unsigned char var_19 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
