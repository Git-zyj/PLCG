#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-13317;
unsigned char var_4 = (unsigned char)54;
short var_16 = (short)24508;
unsigned short var_17 = (unsigned short)22357;
int zero = 0;
unsigned char var_18 = (unsigned char)189;
long long int var_19 = 8876356611230889552LL;
unsigned short var_20 = (unsigned short)53935;
unsigned short var_21 = (unsigned short)17493;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
