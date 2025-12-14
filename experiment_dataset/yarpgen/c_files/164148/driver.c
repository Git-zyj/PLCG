#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)76;
unsigned int var_7 = 1601394672U;
short var_8 = (short)-13265;
short var_9 = (short)19970;
unsigned long long int var_10 = 6707981894799555088ULL;
unsigned char var_11 = (unsigned char)176;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)59;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
