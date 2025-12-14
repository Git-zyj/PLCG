#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3509910590U;
signed char var_2 = (signed char)125;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2358207189U;
unsigned long long int var_8 = 8342586776321136524ULL;
unsigned short var_10 = (unsigned short)64922;
long long int var_12 = -4141995079389783405LL;
unsigned char var_13 = (unsigned char)119;
int zero = 0;
int var_14 = 599944039;
unsigned int var_15 = 3419002366U;
int var_16 = -1950555477;
signed char var_17 = (signed char)-15;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
