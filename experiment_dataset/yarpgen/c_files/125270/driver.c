#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)252;
signed char var_1 = (signed char)18;
unsigned long long int var_2 = 10746624940812013139ULL;
unsigned int var_4 = 3550728634U;
unsigned char var_7 = (unsigned char)164;
unsigned int var_8 = 3844636602U;
unsigned short var_9 = (unsigned short)1136;
unsigned long long int var_10 = 6981178228374458740ULL;
int zero = 0;
unsigned long long int var_11 = 9052876187302076898ULL;
unsigned int var_12 = 185572323U;
unsigned short var_13 = (unsigned short)43557;
unsigned long long int var_14 = 13103982021302576737ULL;
unsigned short var_15 = (unsigned short)17297;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
