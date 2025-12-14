#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4293724330U;
signed char var_7 = (signed char)-18;
int var_14 = 1429125392;
int zero = 0;
unsigned char var_15 = (unsigned char)28;
unsigned long long int var_16 = 5235012857277263335ULL;
short var_17 = (short)-28369;
signed char var_18 = (signed char)-6;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
