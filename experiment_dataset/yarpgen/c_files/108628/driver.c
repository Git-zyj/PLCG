#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6673539819246727156ULL;
long long int var_2 = 4139593057821883111LL;
unsigned short var_8 = (unsigned short)14075;
int zero = 0;
unsigned short var_16 = (unsigned short)37990;
int var_17 = -1890487058;
unsigned long long int var_18 = 15366457267469018462ULL;
short var_19 = (short)-11570;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
