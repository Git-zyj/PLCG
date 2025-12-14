#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1933616808U;
unsigned long long int var_5 = 15412267031792075225ULL;
unsigned char var_7 = (unsigned char)132;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 6767489842551017956ULL;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)11161;
signed char var_15 = (signed char)79;
signed char var_16 = (signed char)-54;
unsigned char var_17 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
