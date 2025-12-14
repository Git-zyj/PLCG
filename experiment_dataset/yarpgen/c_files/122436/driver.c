#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)75;
unsigned short var_4 = (unsigned short)59149;
unsigned int var_5 = 3779735890U;
unsigned int var_9 = 3083090876U;
signed char var_10 = (signed char)18;
int zero = 0;
unsigned long long int var_11 = 17035000128321958012ULL;
short var_12 = (short)11376;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
