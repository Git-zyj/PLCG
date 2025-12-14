#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
int var_7 = -589759549;
int var_11 = 2064420728;
unsigned char var_14 = (unsigned char)226;
int zero = 0;
unsigned short var_18 = (unsigned short)7818;
unsigned short var_19 = (unsigned short)63734;
void init() {
}

void checksum() {
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
