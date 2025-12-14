#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7074231472451519951ULL;
long long int var_3 = -2777572558361028387LL;
int var_5 = -707086989;
signed char var_9 = (signed char)-80;
short var_10 = (short)9412;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_14 = 1247996392;
short var_15 = (short)-13466;
unsigned short var_16 = (unsigned short)20310;
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
