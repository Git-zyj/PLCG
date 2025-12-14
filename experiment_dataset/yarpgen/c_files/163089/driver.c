#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5337579468231625470ULL;
short var_1 = (short)-19430;
short var_2 = (short)24667;
short var_4 = (short)-4432;
unsigned long long int var_5 = 9329519688095742471ULL;
long long int var_8 = 3484283557708376101LL;
short var_9 = (short)27011;
long long int var_14 = 7193305343283925538LL;
long long int var_16 = 1628366438573944064LL;
unsigned long long int var_17 = 8873755999257051796ULL;
int zero = 0;
unsigned long long int var_18 = 18089031008342581536ULL;
long long int var_19 = 3196370469797768471LL;
long long int var_20 = -7211097965113582507LL;
unsigned long long int var_21 = 16733290124112695249ULL;
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
