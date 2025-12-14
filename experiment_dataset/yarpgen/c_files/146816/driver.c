#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
signed char var_2 = (signed char)43;
signed char var_6 = (signed char)-53;
long long int var_7 = -6244689686091651603LL;
int var_11 = -2002304229;
unsigned char var_12 = (unsigned char)107;
long long int var_17 = -5769056616082478208LL;
int zero = 0;
unsigned int var_18 = 2880451324U;
unsigned char var_19 = (unsigned char)127;
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
