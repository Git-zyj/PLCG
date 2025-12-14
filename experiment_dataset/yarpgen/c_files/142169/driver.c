#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15002;
long long int var_2 = -5295061528759396007LL;
unsigned int var_3 = 1527001205U;
unsigned long long int var_4 = 14061161854290025039ULL;
unsigned int var_7 = 460034772U;
unsigned short var_8 = (unsigned short)44095;
short var_9 = (short)-4345;
int zero = 0;
int var_10 = -31268311;
unsigned char var_11 = (unsigned char)121;
unsigned short var_12 = (unsigned short)56784;
long long int var_13 = -8860205165348406285LL;
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
