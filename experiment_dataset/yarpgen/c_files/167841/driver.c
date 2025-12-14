#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4643439004269511278ULL;
unsigned char var_4 = (unsigned char)41;
_Bool var_5 = (_Bool)0;
int var_7 = -1133116393;
unsigned int var_12 = 767545608U;
int zero = 0;
unsigned long long int var_13 = 11716960315436958270ULL;
unsigned int var_14 = 670870413U;
long long int var_15 = -1962574948587422041LL;
unsigned short var_16 = (unsigned short)21912;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
