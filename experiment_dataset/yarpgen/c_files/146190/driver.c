#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12071;
long long int var_2 = -2507670159536526236LL;
long long int var_4 = 7137486533775721539LL;
unsigned char var_5 = (unsigned char)77;
unsigned short var_7 = (unsigned short)14939;
short var_10 = (short)-2009;
long long int var_13 = -6663693915045482381LL;
unsigned int var_14 = 3942711430U;
long long int var_17 = -109665113228085202LL;
int zero = 0;
long long int var_20 = 2145865401142052137LL;
unsigned char var_21 = (unsigned char)207;
void init() {
}

void checksum() {
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
