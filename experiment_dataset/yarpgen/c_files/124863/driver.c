#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2451773220U;
unsigned long long int var_5 = 15307128119274478834ULL;
long long int var_9 = 3857610894781934225LL;
unsigned char var_10 = (unsigned char)145;
int zero = 0;
unsigned short var_12 = (unsigned short)40410;
long long int var_13 = 8817648162077607534LL;
short var_14 = (short)-15967;
void init() {
}

void checksum() {
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
