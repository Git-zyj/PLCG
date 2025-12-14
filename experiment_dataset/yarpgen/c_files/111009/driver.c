#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13729261070551179661ULL;
unsigned char var_5 = (unsigned char)149;
unsigned int var_6 = 2662559193U;
signed char var_7 = (signed char)-59;
unsigned int var_10 = 2728125530U;
signed char var_12 = (signed char)123;
signed char var_13 = (signed char)16;
unsigned int var_15 = 3208068477U;
int zero = 0;
unsigned short var_17 = (unsigned short)48766;
unsigned char var_18 = (unsigned char)3;
void init() {
}

void checksum() {
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
