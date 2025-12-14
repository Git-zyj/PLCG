#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)190;
unsigned short var_5 = (unsigned short)8258;
long long int var_7 = 972899553794192015LL;
int zero = 0;
unsigned long long int var_13 = 5739058737459273636ULL;
long long int var_14 = 8488017191178045735LL;
void init() {
}

void checksum() {
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
