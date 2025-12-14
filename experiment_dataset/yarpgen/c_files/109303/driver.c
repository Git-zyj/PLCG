#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2841717708U;
unsigned int var_2 = 2497177498U;
signed char var_5 = (signed char)-111;
signed char var_6 = (signed char)-42;
unsigned int var_7 = 1011781851U;
unsigned int var_12 = 2828373582U;
int zero = 0;
unsigned short var_15 = (unsigned short)30569;
unsigned long long int var_16 = 440763748711082922ULL;
int var_17 = 1897654440;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)127;
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
