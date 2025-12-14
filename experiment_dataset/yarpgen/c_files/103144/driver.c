#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18992;
short var_2 = (short)-19534;
long long int var_3 = 6639981717912524633LL;
unsigned int var_5 = 2756190332U;
unsigned short var_11 = (unsigned short)31021;
unsigned char var_13 = (unsigned char)201;
int zero = 0;
unsigned long long int var_18 = 12950773246979171603ULL;
short var_19 = (short)5257;
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
