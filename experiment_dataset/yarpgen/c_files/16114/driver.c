#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 632390695;
short var_7 = (short)8679;
int var_8 = 1604260206;
signed char var_9 = (signed char)2;
int var_11 = 933761333;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)107;
int var_15 = -1375238222;
int zero = 0;
int var_17 = 1510932000;
short var_18 = (short)9209;
int var_19 = 1558816523;
int var_20 = 1725961198;
int var_21 = 103343803;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
