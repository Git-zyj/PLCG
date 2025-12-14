#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11887555453236836009ULL;
int var_6 = -423803916;
unsigned int var_9 = 2729319063U;
unsigned int var_10 = 1111765250U;
signed char var_13 = (signed char)-38;
signed char var_16 = (signed char)75;
int zero = 0;
signed char var_17 = (signed char)-106;
unsigned int var_18 = 2573782573U;
short var_19 = (short)-13112;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
