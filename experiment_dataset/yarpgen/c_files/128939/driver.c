#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26691;
long long int var_4 = -7591334931204573423LL;
short var_5 = (short)-30230;
long long int var_6 = -873756772562285679LL;
unsigned short var_9 = (unsigned short)27485;
unsigned char var_17 = (unsigned char)16;
unsigned short var_19 = (unsigned short)36591;
int zero = 0;
signed char var_20 = (signed char)-30;
short var_21 = (short)2020;
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
