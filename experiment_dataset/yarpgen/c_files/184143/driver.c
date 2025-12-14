#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6749939222133970248ULL;
short var_2 = (short)-21977;
short var_5 = (short)4367;
long long int var_6 = 5730130380482493390LL;
int var_9 = 1737531441;
signed char var_10 = (signed char)34;
unsigned long long int var_14 = 5045211314769970769ULL;
unsigned int var_16 = 3310644923U;
int zero = 0;
signed char var_18 = (signed char)68;
unsigned short var_19 = (unsigned short)44727;
void init() {
}

void checksum() {
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
