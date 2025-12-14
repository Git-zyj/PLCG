#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)10531;
unsigned char var_6 = (unsigned char)109;
unsigned long long int var_10 = 1101622611594686545ULL;
unsigned short var_12 = (unsigned short)39461;
int var_14 = 2028983123;
int zero = 0;
long long int var_15 = -5566501530796548465LL;
unsigned long long int var_16 = 9359584804210254227ULL;
unsigned char var_17 = (unsigned char)31;
unsigned int var_18 = 1378624639U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
