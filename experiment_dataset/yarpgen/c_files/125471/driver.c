#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 178160350U;
long long int var_1 = -8694222501834763060LL;
unsigned long long int var_2 = 17507862665085786653ULL;
unsigned short var_4 = (unsigned short)65157;
unsigned char var_5 = (unsigned char)198;
unsigned short var_6 = (unsigned short)26877;
long long int var_9 = -2534658246094570281LL;
unsigned short var_11 = (unsigned short)29685;
unsigned short var_12 = (unsigned short)48541;
int zero = 0;
unsigned long long int var_15 = 16733497569508044766ULL;
unsigned short var_16 = (unsigned short)42749;
signed char var_17 = (signed char)-1;
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
