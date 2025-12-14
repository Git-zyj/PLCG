#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)88;
unsigned short var_2 = (unsigned short)60607;
int var_6 = -1180102458;
unsigned long long int var_8 = 7685924134058174295ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_10 = (short)14651;
short var_11 = (short)12823;
int var_12 = 258613241;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
