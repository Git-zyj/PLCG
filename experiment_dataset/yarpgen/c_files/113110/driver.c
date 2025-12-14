#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 6548712965035777755ULL;
unsigned long long int var_8 = 8987480985555350889ULL;
signed char var_10 = (signed char)31;
signed char var_11 = (signed char)36;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_17 = (short)-24888;
unsigned short var_18 = (unsigned short)45371;
unsigned int var_19 = 3303088914U;
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
