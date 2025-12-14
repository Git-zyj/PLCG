#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53847;
unsigned int var_4 = 3728529786U;
unsigned char var_5 = (unsigned char)212;
int var_11 = -1290036440;
int var_14 = -1109159069;
int zero = 0;
unsigned char var_16 = (unsigned char)15;
signed char var_17 = (signed char)58;
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
