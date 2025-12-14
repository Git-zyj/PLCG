#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)42247;
unsigned short var_8 = (unsigned short)14362;
unsigned short var_10 = (unsigned short)15347;
int zero = 0;
short var_14 = (short)-27007;
unsigned int var_15 = 2437189477U;
long long int var_16 = -1092685271080989716LL;
unsigned short var_17 = (unsigned short)17021;
long long int var_18 = -65355303867436563LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
