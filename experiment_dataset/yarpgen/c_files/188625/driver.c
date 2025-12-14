#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)-21;
_Bool var_4 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)40104;
signed char var_12 = (signed char)33;
int zero = 0;
signed char var_15 = (signed char)-70;
unsigned char var_16 = (unsigned char)72;
unsigned int var_17 = 892844050U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
