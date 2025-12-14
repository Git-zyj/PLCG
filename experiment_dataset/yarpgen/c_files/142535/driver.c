#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4322819988443633238LL;
unsigned short var_4 = (unsigned short)2453;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)126;
unsigned int var_8 = 3865331328U;
int zero = 0;
short var_13 = (short)-7518;
unsigned long long int var_14 = 12857658108101861838ULL;
int var_15 = -1147077000;
signed char var_16 = (signed char)-120;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
