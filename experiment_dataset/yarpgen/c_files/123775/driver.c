#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 450683812;
int var_7 = -369500922;
short var_8 = (short)20452;
unsigned int var_9 = 287584651U;
int zero = 0;
unsigned char var_10 = (unsigned char)128;
unsigned int var_11 = 2245342784U;
unsigned char var_12 = (unsigned char)199;
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
