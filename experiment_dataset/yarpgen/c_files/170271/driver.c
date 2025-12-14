#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54281;
unsigned long long int var_1 = 8201548143138923257ULL;
_Bool var_4 = (_Bool)0;
short var_6 = (short)-31790;
int var_8 = 397011191;
short var_9 = (short)-10280;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 13164421199974517801ULL;
int var_13 = -1680451727;
signed char var_14 = (signed char)(-127 - 1);
unsigned long long int var_15 = 4257590789219772827ULL;
void init() {
}

void checksum() {
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
