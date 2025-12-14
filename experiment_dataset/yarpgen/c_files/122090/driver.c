#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3225605282118377794ULL;
unsigned long long int var_3 = 12691218176576330471ULL;
short var_6 = (short)-6441;
unsigned long long int var_10 = 11526473428255115329ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)23600;
signed char var_13 = (signed char)100;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
