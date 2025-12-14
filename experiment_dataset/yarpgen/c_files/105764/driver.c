#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6684417063879123966ULL;
unsigned long long int var_2 = 7050223998878534411ULL;
_Bool var_4 = (_Bool)1;
short var_6 = (short)-24563;
short var_9 = (short)6495;
unsigned short var_13 = (unsigned short)45614;
unsigned short var_14 = (unsigned short)21646;
int zero = 0;
short var_16 = (short)1103;
signed char var_17 = (signed char)59;
unsigned long long int var_18 = 5838877931421329458ULL;
unsigned char var_19 = (unsigned char)96;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
