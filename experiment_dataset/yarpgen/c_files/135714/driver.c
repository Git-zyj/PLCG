#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 6575667489404181312LL;
unsigned char var_4 = (unsigned char)143;
int var_10 = -241685203;
unsigned char var_11 = (unsigned char)149;
long long int var_12 = 3354420412614536591LL;
unsigned char var_13 = (unsigned char)141;
int zero = 0;
short var_14 = (short)22939;
unsigned long long int var_15 = 4337174496067339577ULL;
unsigned char var_16 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
