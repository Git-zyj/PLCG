#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -197873349;
unsigned char var_3 = (unsigned char)24;
unsigned char var_4 = (unsigned char)220;
_Bool var_5 = (_Bool)1;
long long int var_7 = -855508019166051028LL;
unsigned char var_8 = (unsigned char)34;
int zero = 0;
int var_10 = -1923142603;
unsigned short var_11 = (unsigned short)27726;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
