#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)71;
unsigned char var_6 = (unsigned char)141;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)55;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)119;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
