#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_2 = (unsigned short)29178;
unsigned int var_3 = 2339220372U;
int var_4 = 177248820;
unsigned short var_7 = (unsigned short)44442;
unsigned short var_8 = (unsigned short)50284;
unsigned int var_9 = 1185068032U;
short var_10 = (short)19407;
int zero = 0;
long long int var_11 = 8352152171074124204LL;
unsigned short var_12 = (unsigned short)2546;
unsigned char var_13 = (unsigned char)76;
int var_14 = 1186034231;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
