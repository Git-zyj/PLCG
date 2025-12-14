#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16254;
signed char var_1 = (signed char)(-127 - 1);
unsigned short var_4 = (unsigned short)62530;
unsigned char var_5 = (unsigned char)163;
unsigned short var_6 = (unsigned short)51336;
unsigned short var_7 = (unsigned short)40739;
unsigned short var_8 = (unsigned short)14224;
unsigned int var_11 = 3361236359U;
unsigned int var_14 = 1247677469U;
signed char var_17 = (signed char)-22;
unsigned char var_18 = (unsigned char)10;
int zero = 0;
long long int var_20 = 7667138079761900756LL;
unsigned long long int var_21 = 3836823141049271273ULL;
void init() {
}

void checksum() {
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
