#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-100;
short var_4 = (short)-2003;
unsigned char var_5 = (unsigned char)252;
int var_10 = 771893770;
signed char var_14 = (signed char)-38;
unsigned char var_16 = (unsigned char)121;
unsigned int var_17 = 2872562321U;
int zero = 0;
unsigned int var_18 = 1778717849U;
unsigned long long int var_19 = 4728705501939556875ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
