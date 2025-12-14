#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5312650249907628379LL;
unsigned short var_4 = (unsigned short)25316;
unsigned int var_10 = 4194935099U;
long long int var_13 = -8081917200623256382LL;
unsigned char var_16 = (unsigned char)223;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)70;
long long int var_20 = -6978432003727339284LL;
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
