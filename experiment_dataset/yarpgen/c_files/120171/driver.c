#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -87254392270010817LL;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_17 = (unsigned short)2247;
int var_18 = -1610158496;
unsigned short var_19 = (unsigned short)24252;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
