#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15711113181640049925ULL;
short var_6 = (short)24298;
short var_13 = (short)2229;
signed char var_15 = (signed char)-35;
unsigned char var_17 = (unsigned char)26;
int zero = 0;
int var_19 = -1001569438;
unsigned short var_20 = (unsigned short)23836;
long long int var_21 = 1109067525811581526LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
