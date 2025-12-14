#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 411677323371458685LL;
unsigned int var_5 = 1409268409U;
short var_7 = (short)29868;
short var_8 = (short)-18898;
unsigned int var_13 = 2141644304U;
unsigned long long int var_16 = 15897380708168789432ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)24832;
unsigned int var_19 = 2787891608U;
void init() {
}

void checksum() {
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
