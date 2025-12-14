#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1960635924;
int var_1 = -144073512;
long long int var_2 = -7643182612582960572LL;
int var_3 = -312637401;
int var_4 = -1856328438;
short var_5 = (short)30967;
signed char var_8 = (signed char)9;
signed char var_9 = (signed char)-11;
signed char var_10 = (signed char)45;
int zero = 0;
signed char var_11 = (signed char)46;
int var_12 = 882458639;
int var_13 = -1465882636;
long long int var_14 = 4204525306597497966LL;
short var_15 = (short)-15527;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
