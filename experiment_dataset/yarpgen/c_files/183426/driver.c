#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21628;
int var_1 = 190809213;
unsigned short var_5 = (unsigned short)43081;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)36737;
unsigned long long int var_8 = 10659702464214521477ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)18928;
unsigned short var_13 = (unsigned short)42409;
int zero = 0;
unsigned long long int var_14 = 11076952833191956781ULL;
unsigned char var_15 = (unsigned char)152;
unsigned short var_16 = (unsigned short)31326;
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
