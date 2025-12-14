#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15449249919508062971ULL;
unsigned char var_1 = (unsigned char)215;
int var_2 = -1629863131;
unsigned int var_5 = 2892623451U;
unsigned char var_8 = (unsigned char)109;
int var_11 = -722972198;
unsigned int var_12 = 4150355012U;
unsigned int var_13 = 1098883810U;
int zero = 0;
unsigned char var_17 = (unsigned char)210;
unsigned short var_18 = (unsigned short)33207;
void init() {
}

void checksum() {
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
