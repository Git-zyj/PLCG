#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4269803297U;
long long int var_1 = 2780068012219646314LL;
unsigned int var_6 = 2859365497U;
long long int var_8 = 6194913001144756544LL;
unsigned char var_11 = (unsigned char)80;
long long int var_13 = -8958228925396720240LL;
int zero = 0;
signed char var_15 = (signed char)-57;
unsigned short var_16 = (unsigned short)51445;
unsigned short var_17 = (unsigned short)28471;
long long int var_18 = 7290513828960996285LL;
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
