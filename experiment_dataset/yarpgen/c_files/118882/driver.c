#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)23583;
long long int var_6 = -5097221463938878256LL;
unsigned char var_12 = (unsigned char)244;
unsigned char var_15 = (unsigned char)206;
short var_17 = (short)-4316;
int zero = 0;
unsigned char var_19 = (unsigned char)251;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
