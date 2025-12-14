#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
unsigned short var_1 = (unsigned short)43974;
long long int var_3 = -2257860609616277554LL;
unsigned short var_5 = (unsigned short)29067;
_Bool var_6 = (_Bool)1;
long long int var_9 = 241578236778411296LL;
int zero = 0;
short var_12 = (short)-18385;
int var_13 = 1987086589;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
