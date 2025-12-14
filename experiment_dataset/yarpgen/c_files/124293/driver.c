#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1701409579;
int var_5 = -864020182;
unsigned short var_7 = (unsigned short)30402;
unsigned int var_11 = 855802130U;
short var_14 = (short)-19483;
long long int var_18 = -901102165597617234LL;
int zero = 0;
short var_19 = (short)-21728;
_Bool var_20 = (_Bool)1;
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
