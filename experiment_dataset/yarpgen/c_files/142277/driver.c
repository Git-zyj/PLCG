#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5894273513712703306ULL;
unsigned short var_5 = (unsigned short)62587;
short var_7 = (short)6247;
long long int var_8 = 1723006472568897522LL;
int zero = 0;
unsigned int var_15 = 713486394U;
long long int var_16 = -9139194682618225585LL;
void init() {
}

void checksum() {
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
