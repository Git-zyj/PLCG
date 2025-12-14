#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56139;
unsigned char var_8 = (unsigned char)148;
unsigned int var_11 = 1699128270U;
int zero = 0;
unsigned int var_16 = 3089262882U;
unsigned char var_17 = (unsigned char)203;
long long int var_18 = 8906429254609089683LL;
void init() {
}

void checksum() {
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
