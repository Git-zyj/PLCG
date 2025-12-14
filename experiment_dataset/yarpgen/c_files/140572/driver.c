#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25684;
unsigned long long int var_2 = 245213523543557999ULL;
unsigned short var_4 = (unsigned short)1635;
int var_5 = 1794501068;
short var_6 = (short)30883;
unsigned char var_9 = (unsigned char)51;
int zero = 0;
unsigned short var_10 = (unsigned short)36459;
unsigned short var_11 = (unsigned short)15824;
signed char var_12 = (signed char)-21;
unsigned short var_13 = (unsigned short)48135;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
