#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1333679679;
short var_2 = (short)25651;
short var_3 = (short)-31344;
unsigned char var_4 = (unsigned char)181;
unsigned long long int var_6 = 11740968650136832044ULL;
short var_7 = (short)11393;
short var_8 = (short)12803;
signed char var_11 = (signed char)16;
int zero = 0;
unsigned long long int var_14 = 17988652754998935494ULL;
unsigned char var_15 = (unsigned char)189;
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
