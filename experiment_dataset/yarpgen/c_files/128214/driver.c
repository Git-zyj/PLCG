#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -997118646;
int var_2 = -606077112;
unsigned int var_8 = 1181238425U;
int zero = 0;
long long int var_15 = -6422719643740109734LL;
short var_16 = (short)-4731;
int var_17 = -2017195290;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
