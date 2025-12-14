#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_10 = (unsigned char)77;
unsigned long long int var_17 = 11681563511306175622ULL;
int zero = 0;
short var_19 = (short)-13892;
unsigned short var_20 = (unsigned short)3794;
int var_21 = 1432036699;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
