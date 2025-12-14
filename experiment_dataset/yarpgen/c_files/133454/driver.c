#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
int var_7 = 539444357;
unsigned long long int var_8 = 13186514980946543359ULL;
unsigned char var_9 = (unsigned char)49;
int var_10 = -1008548925;
int zero = 0;
unsigned short var_12 = (unsigned short)29452;
unsigned char var_13 = (unsigned char)102;
unsigned char var_14 = (unsigned char)125;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
