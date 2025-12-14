#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8239101862219465258LL;
unsigned short var_12 = (unsigned short)52748;
unsigned long long int var_15 = 12053332213862114017ULL;
int var_17 = 2021273422;
int zero = 0;
unsigned int var_20 = 823071826U;
unsigned char var_21 = (unsigned char)185;
void init() {
}

void checksum() {
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
