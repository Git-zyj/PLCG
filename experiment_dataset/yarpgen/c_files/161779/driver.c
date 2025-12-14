#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)163;
unsigned int var_1 = 804857480U;
int var_2 = 1969497168;
signed char var_3 = (signed char)30;
int zero = 0;
unsigned int var_15 = 149991012U;
unsigned short var_16 = (unsigned short)745;
unsigned char var_17 = (unsigned char)165;
unsigned int var_18 = 4054319330U;
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
