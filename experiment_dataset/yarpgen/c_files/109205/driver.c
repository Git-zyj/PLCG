#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)30821;
unsigned char var_9 = (unsigned char)174;
_Bool var_10 = (_Bool)1;
unsigned char var_11 = (unsigned char)95;
unsigned char var_14 = (unsigned char)106;
int zero = 0;
unsigned char var_15 = (unsigned char)11;
long long int var_16 = -8816419419698672800LL;
unsigned char var_17 = (unsigned char)1;
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
