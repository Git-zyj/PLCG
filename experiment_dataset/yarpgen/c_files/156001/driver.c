#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-104;
unsigned char var_3 = (unsigned char)237;
int var_4 = -1480113849;
unsigned int var_5 = 2482652659U;
unsigned char var_7 = (unsigned char)99;
unsigned int var_8 = 1725283265U;
int zero = 0;
long long int var_15 = -3003444415230602950LL;
unsigned int var_16 = 279726163U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
