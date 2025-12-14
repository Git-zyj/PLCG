#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_5 = (unsigned short)30904;
unsigned int var_12 = 3578600498U;
unsigned long long int var_15 = 3902113140111823110ULL;
long long int var_17 = 1408662366527668915LL;
int zero = 0;
unsigned char var_19 = (unsigned char)236;
unsigned char var_20 = (unsigned char)133;
unsigned short var_21 = (unsigned short)58291;
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
