#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)65024;
short var_7 = (short)11971;
long long int var_8 = -511758697602384086LL;
signed char var_9 = (signed char)-70;
int zero = 0;
short var_15 = (short)31889;
long long int var_16 = 849493808455380058LL;
signed char var_17 = (signed char)-113;
unsigned char var_18 = (unsigned char)227;
void init() {
}

void checksum() {
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
