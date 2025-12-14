#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2638967562272787762LL;
unsigned int var_1 = 1878590046U;
signed char var_3 = (signed char)53;
int var_6 = 883399870;
unsigned long long int var_9 = 17970030786056000856ULL;
unsigned char var_12 = (unsigned char)32;
int zero = 0;
int var_16 = -180698447;
short var_17 = (short)28679;
int var_18 = -1555964762;
unsigned long long int var_19 = 16507663367778980028ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
