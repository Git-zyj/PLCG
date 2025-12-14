#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4599839568419884266LL;
short var_4 = (short)-25601;
unsigned long long int var_6 = 5927023632860816151ULL;
signed char var_7 = (signed char)36;
signed char var_10 = (signed char)-24;
unsigned char var_14 = (unsigned char)241;
int zero = 0;
unsigned short var_15 = (unsigned short)50633;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 5404467221430231901ULL;
unsigned long long int var_18 = 2182383782745686538ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
