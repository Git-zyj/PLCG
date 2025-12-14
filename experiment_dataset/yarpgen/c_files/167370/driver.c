#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15159;
unsigned long long int var_3 = 1614091891017597231ULL;
unsigned short var_5 = (unsigned short)11032;
_Bool var_6 = (_Bool)0;
unsigned short var_14 = (unsigned short)33339;
int zero = 0;
unsigned char var_18 = (unsigned char)109;
unsigned short var_19 = (unsigned short)30815;
unsigned int var_20 = 3770096994U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
