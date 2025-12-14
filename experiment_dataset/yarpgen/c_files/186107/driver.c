#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 4723825749211009638ULL;
long long int var_10 = -7858159654384613797LL;
signed char var_11 = (signed char)68;
int var_12 = 634878915;
unsigned char var_13 = (unsigned char)13;
int zero = 0;
unsigned short var_15 = (unsigned short)5451;
unsigned short var_16 = (unsigned short)26767;
unsigned long long int var_17 = 16531200803533156088ULL;
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
