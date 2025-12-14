#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9054181707610589723ULL;
signed char var_7 = (signed char)-26;
unsigned short var_9 = (unsigned short)37856;
unsigned long long int var_11 = 5845178299100334904ULL;
unsigned int var_12 = 2357251758U;
int var_14 = 925106678;
int zero = 0;
unsigned int var_15 = 3668457738U;
unsigned char var_16 = (unsigned char)79;
unsigned long long int var_17 = 8097547821980175399ULL;
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
