#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15599371775704804284ULL;
long long int var_5 = -2592349935702333715LL;
unsigned int var_7 = 1992706061U;
long long int var_8 = 8235880101402744917LL;
long long int var_10 = 6944063153895482876LL;
int var_14 = -1190940300;
long long int var_15 = -207805331523054570LL;
short var_16 = (short)23142;
unsigned int var_17 = 3198007195U;
int zero = 0;
int var_20 = 1819272959;
unsigned int var_21 = 3933867442U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
