#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 8867313U;
unsigned long long int var_6 = 126151720181653125ULL;
unsigned int var_9 = 636391285U;
short var_10 = (short)1955;
unsigned long long int var_11 = 4365557082628091181ULL;
int var_12 = -60812456;
int zero = 0;
unsigned short var_14 = (unsigned short)34324;
unsigned short var_15 = (unsigned short)29421;
unsigned int var_16 = 3970331175U;
unsigned short var_17 = (unsigned short)11812;
signed char var_18 = (signed char)-35;
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
