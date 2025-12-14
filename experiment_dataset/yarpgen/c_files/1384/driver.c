#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7285985660482257168ULL;
unsigned char var_2 = (unsigned char)123;
unsigned long long int var_5 = 9834074107504580315ULL;
unsigned char var_6 = (unsigned char)16;
unsigned char var_7 = (unsigned char)59;
unsigned long long int var_8 = 14524376519327645655ULL;
int zero = 0;
unsigned long long int var_10 = 7723507279171841259ULL;
unsigned long long int var_11 = 15183210574611060081ULL;
unsigned long long int var_12 = 12204500871155973816ULL;
unsigned long long int var_13 = 12518904262671083085ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
