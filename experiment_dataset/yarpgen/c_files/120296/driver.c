#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25066;
unsigned long long int var_4 = 13830431665730154753ULL;
short var_6 = (short)30895;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)114;
int zero = 0;
unsigned int var_12 = 1510817194U;
signed char var_13 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
