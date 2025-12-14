#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)236;
unsigned int var_2 = 896267222U;
signed char var_4 = (signed char)-100;
unsigned int var_11 = 2862737079U;
unsigned int var_17 = 3656876542U;
int zero = 0;
unsigned short var_18 = (unsigned short)37195;
unsigned int var_19 = 1242087479U;
unsigned int var_20 = 3608334831U;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
