#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6907667544408758410LL;
unsigned short var_1 = (unsigned short)28539;
long long int var_6 = -3963367340838773324LL;
unsigned long long int var_10 = 1648584579516997232ULL;
int var_12 = -1689661518;
int zero = 0;
short var_13 = (short)24515;
long long int var_14 = -7519268692870392213LL;
unsigned char var_15 = (unsigned char)191;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
