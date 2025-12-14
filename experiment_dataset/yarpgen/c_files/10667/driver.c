#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4180049216U;
int var_3 = -42600648;
unsigned long long int var_5 = 3211965732462308200ULL;
unsigned short var_8 = (unsigned short)14718;
int zero = 0;
unsigned short var_11 = (unsigned short)43567;
unsigned long long int var_12 = 12827436964899790578ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
