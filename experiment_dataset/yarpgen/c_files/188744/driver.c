#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12028;
short var_1 = (short)-18779;
long long int var_4 = 6851598124250513837LL;
int var_5 = -466868948;
int zero = 0;
signed char var_13 = (signed char)106;
unsigned long long int var_14 = 15111959886384610239ULL;
long long int var_15 = -3851297450567457052LL;
unsigned char var_16 = (unsigned char)101;
long long int var_17 = 8594598711572205733LL;
unsigned long long int var_18 = 5549648401120676974ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
