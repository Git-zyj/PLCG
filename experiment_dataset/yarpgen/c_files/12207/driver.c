#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11131780027432951132ULL;
_Bool var_2 = (_Bool)1;
short var_7 = (short)-18134;
unsigned char var_10 = (unsigned char)70;
int var_11 = 1883849215;
unsigned int var_15 = 2984530675U;
int var_16 = -145759484;
int zero = 0;
unsigned short var_17 = (unsigned short)59214;
unsigned long long int var_18 = 7859317486193175025ULL;
unsigned int var_19 = 2424052310U;
unsigned int var_20 = 923898822U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
