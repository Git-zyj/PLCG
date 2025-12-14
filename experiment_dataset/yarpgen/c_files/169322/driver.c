#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1289982642;
unsigned long long int var_1 = 11443769187371477711ULL;
unsigned long long int var_2 = 6746979394525146689ULL;
unsigned short var_3 = (unsigned short)19131;
signed char var_4 = (signed char)36;
int var_8 = 2096829730;
long long int var_9 = 3554504887381506147LL;
long long int var_11 = -2352198714152182753LL;
int var_13 = -14042407;
int zero = 0;
long long int var_14 = -3247634006974175483LL;
signed char var_15 = (signed char)-47;
void init() {
}

void checksum() {
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
