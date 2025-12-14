#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
unsigned long long int var_2 = 3642793870833310577ULL;
unsigned int var_3 = 1642492989U;
unsigned char var_4 = (unsigned char)131;
unsigned long long int var_8 = 16087750431568132527ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)71;
int var_12 = -2079095642;
unsigned short var_13 = (unsigned short)41301;
unsigned int var_14 = 2478030047U;
unsigned short var_15 = (unsigned short)51102;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
