#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1289164506178405086ULL;
unsigned short var_4 = (unsigned short)26591;
unsigned short var_8 = (unsigned short)3453;
unsigned long long int var_10 = 12204161080223479208ULL;
unsigned int var_12 = 3838208238U;
unsigned short var_14 = (unsigned short)45432;
int zero = 0;
unsigned long long int var_15 = 16035231356438362968ULL;
signed char var_16 = (signed char)6;
unsigned short var_17 = (unsigned short)14541;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
