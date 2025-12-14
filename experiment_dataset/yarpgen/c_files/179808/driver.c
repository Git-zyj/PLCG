#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13032;
unsigned short var_2 = (unsigned short)8059;
long long int var_4 = -2945282037753002028LL;
long long int var_6 = 1278118864954738992LL;
unsigned long long int var_7 = 14046893483266589160ULL;
unsigned long long int var_8 = 10810083073398446976ULL;
int zero = 0;
long long int var_10 = 9214192955194846545LL;
unsigned int var_11 = 3711775200U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
