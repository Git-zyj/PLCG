#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_2 = (unsigned char)173;
unsigned char var_3 = (unsigned char)164;
unsigned short var_4 = (unsigned short)14925;
unsigned long long int var_8 = 8986777218416151625ULL;
int zero = 0;
unsigned long long int var_15 = 15716193379303068293ULL;
signed char var_16 = (signed char)-23;
void init() {
}

void checksum() {
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
