#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1918101239;
unsigned short var_2 = (unsigned short)18146;
short var_3 = (short)26141;
unsigned long long int var_6 = 10161135372696826674ULL;
int var_7 = -22593515;
signed char var_8 = (signed char)-30;
int zero = 0;
unsigned int var_11 = 1045780935U;
signed char var_12 = (signed char)-69;
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
