#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)169;
unsigned long long int var_2 = 10999711749705735674ULL;
short var_6 = (short)-19645;
unsigned long long int var_13 = 4570864273549209774ULL;
signed char var_14 = (signed char)-16;
int zero = 0;
unsigned long long int var_17 = 16267461716012163176ULL;
unsigned int var_18 = 3075489183U;
unsigned long long int var_19 = 12274935738604336350ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
