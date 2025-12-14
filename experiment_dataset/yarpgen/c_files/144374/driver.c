#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1903119498U;
unsigned int var_2 = 4201948384U;
unsigned short var_4 = (unsigned short)33783;
unsigned short var_10 = (unsigned short)4221;
int var_13 = 143207391;
unsigned long long int var_14 = 4497373743708251895ULL;
int zero = 0;
int var_16 = -1545756350;
int var_17 = 1485824568;
void init() {
}

void checksum() {
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
