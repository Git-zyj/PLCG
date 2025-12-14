#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30100;
long long int var_1 = 2996389707286296031LL;
unsigned char var_3 = (unsigned char)29;
unsigned int var_4 = 2816099795U;
signed char var_8 = (signed char)62;
long long int var_9 = 2731621277091395921LL;
unsigned char var_13 = (unsigned char)147;
long long int var_15 = -140881262794126064LL;
int zero = 0;
unsigned int var_16 = 2663662769U;
int var_17 = -1540365401;
void init() {
}

void checksum() {
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
