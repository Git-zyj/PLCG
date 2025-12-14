#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7402774807596937297LL;
_Bool var_6 = (_Bool)1;
int var_8 = -1498867296;
unsigned char var_10 = (unsigned char)93;
long long int var_13 = -6623233280154218173LL;
int zero = 0;
unsigned short var_15 = (unsigned short)30240;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
