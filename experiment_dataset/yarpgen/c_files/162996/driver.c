#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3109382441592066838ULL;
long long int var_3 = 8779047074728645151LL;
unsigned short var_5 = (unsigned short)53419;
short var_8 = (short)-16119;
int var_10 = -1900284486;
int zero = 0;
unsigned long long int var_13 = 14075499372945807192ULL;
int var_14 = 196540175;
unsigned char var_15 = (unsigned char)113;
short var_16 = (short)4808;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
