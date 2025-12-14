#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 925704225;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)244;
int var_10 = -1290565179;
int zero = 0;
unsigned short var_11 = (unsigned short)30713;
unsigned char var_12 = (unsigned char)117;
unsigned short var_13 = (unsigned short)6800;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
