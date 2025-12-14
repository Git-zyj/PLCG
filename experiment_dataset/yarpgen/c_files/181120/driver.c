#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)0;
unsigned int var_3 = 2431182353U;
unsigned char var_13 = (unsigned char)86;
unsigned int var_15 = 3131016376U;
int zero = 0;
signed char var_16 = (signed char)-98;
unsigned int var_17 = 701578760U;
signed char var_18 = (signed char)88;
void init() {
}

void checksum() {
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
