#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23914;
int var_1 = 1921441914;
short var_2 = (short)7561;
unsigned long long int var_4 = 14767117554483316890ULL;
_Bool var_5 = (_Bool)0;
int var_7 = 1853117287;
int zero = 0;
unsigned char var_10 = (unsigned char)187;
short var_11 = (short)17029;
unsigned char var_12 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
