#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3999118557U;
unsigned int var_1 = 4119890813U;
signed char var_2 = (signed char)-34;
unsigned int var_6 = 1582127999U;
unsigned int var_7 = 2209216818U;
unsigned int var_8 = 1548940838U;
signed char var_10 = (signed char)-50;
int var_13 = 568572392;
int zero = 0;
unsigned char var_14 = (unsigned char)66;
unsigned long long int var_15 = 7680970382867031226ULL;
int var_16 = -716409472;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
