#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 337995332U;
unsigned short var_2 = (unsigned short)24934;
int var_4 = -156629528;
signed char var_5 = (signed char)60;
int var_9 = 869497522;
unsigned short var_11 = (unsigned short)27012;
_Bool var_12 = (_Bool)1;
long long int var_13 = 2524890106733161303LL;
int zero = 0;
unsigned int var_14 = 2020382759U;
long long int var_15 = 1941705653034364361LL;
short var_16 = (short)-20481;
short var_17 = (short)30634;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
