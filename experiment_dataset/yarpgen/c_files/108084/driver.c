#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3770266735093878849LL;
unsigned char var_2 = (unsigned char)148;
unsigned long long int var_5 = 14896529003572311020ULL;
unsigned long long int var_8 = 3885648146872536933ULL;
long long int var_15 = -8506412377786232107LL;
int zero = 0;
unsigned char var_17 = (unsigned char)85;
unsigned int var_18 = 677721645U;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
