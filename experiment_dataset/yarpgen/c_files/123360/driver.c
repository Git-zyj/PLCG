#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6302723006960793041LL;
unsigned short var_4 = (unsigned short)21607;
unsigned int var_5 = 3794718856U;
int var_6 = -197789202;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)2876;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-22639;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
