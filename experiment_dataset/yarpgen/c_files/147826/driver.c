#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1385332174;
unsigned char var_3 = (unsigned char)225;
int var_4 = -1883149157;
unsigned int var_6 = 1795068623U;
signed char var_13 = (signed char)-115;
int zero = 0;
int var_14 = 1253067070;
unsigned long long int var_15 = 7099060578850333606ULL;
long long int var_16 = -1535448593683364428LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
