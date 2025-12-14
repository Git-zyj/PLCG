#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -813527432;
unsigned int var_4 = 270581259U;
unsigned int var_6 = 426016627U;
unsigned long long int var_7 = 7031781570010134394ULL;
unsigned char var_11 = (unsigned char)17;
unsigned int var_12 = 972730171U;
int zero = 0;
unsigned short var_14 = (unsigned short)56936;
signed char var_15 = (signed char)120;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
