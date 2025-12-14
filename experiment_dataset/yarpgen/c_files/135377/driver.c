#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 52602773U;
long long int var_2 = 5068002924854102105LL;
short var_4 = (short)8027;
short var_6 = (short)16212;
long long int var_8 = -7582875719623232226LL;
unsigned int var_14 = 1153184819U;
unsigned int var_15 = 2532107733U;
long long int var_16 = 1462464949318170027LL;
int zero = 0;
long long int var_17 = 5014323141425651688LL;
unsigned int var_18 = 4088799048U;
short var_19 = (short)-14879;
unsigned int var_20 = 1850115898U;
unsigned int var_21 = 2341777495U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
