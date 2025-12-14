#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8108113300334417985LL;
int var_8 = 647277219;
short var_12 = (short)-12613;
unsigned int var_14 = 3404369407U;
int zero = 0;
long long int var_15 = 4305522832993082820LL;
unsigned int var_16 = 1873758137U;
int var_17 = 1461054071;
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
