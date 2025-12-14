#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23906;
signed char var_1 = (signed char)18;
unsigned long long int var_2 = 6184016242001579624ULL;
signed char var_5 = (signed char)33;
unsigned int var_6 = 3047612703U;
signed char var_7 = (signed char)50;
int zero = 0;
unsigned int var_10 = 3516842711U;
unsigned int var_11 = 1657031792U;
unsigned int var_12 = 2089487484U;
unsigned int var_13 = 1420404067U;
unsigned long long int var_14 = 10013312856938485561ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
