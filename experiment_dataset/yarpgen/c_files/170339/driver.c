#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1441370908U;
unsigned long long int var_9 = 6470195904035721177ULL;
unsigned long long int var_11 = 2736078952151507653ULL;
short var_14 = (short)-13974;
int zero = 0;
short var_16 = (short)-21643;
unsigned long long int var_17 = 11774594941507082963ULL;
unsigned char var_18 = (unsigned char)121;
unsigned char var_19 = (unsigned char)37;
long long int var_20 = -1712300492243398587LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
