#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)113;
unsigned char var_7 = (unsigned char)204;
long long int var_11 = -4813084259780928335LL;
unsigned short var_14 = (unsigned short)24311;
_Bool var_17 = (_Bool)1;
long long int var_18 = -1868115108292786787LL;
int zero = 0;
unsigned short var_20 = (unsigned short)36608;
unsigned long long int var_21 = 7742445234418791473ULL;
unsigned long long int var_22 = 9250492230924219808ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
