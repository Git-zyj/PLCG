#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1581377091;
signed char var_3 = (signed char)50;
signed char var_4 = (signed char)119;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)25239;
short var_11 = (short)-23505;
short var_13 = (short)4341;
int zero = 0;
int var_14 = 374472949;
unsigned long long int var_15 = 9395886949806483157ULL;
signed char var_16 = (signed char)126;
short var_17 = (short)11559;
void init() {
}

void checksum() {
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
