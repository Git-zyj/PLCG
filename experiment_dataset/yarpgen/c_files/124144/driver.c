#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
unsigned long long int var_5 = 11012534745302606911ULL;
unsigned long long int var_10 = 16016253797981907250ULL;
unsigned short var_11 = (unsigned short)43851;
signed char var_12 = (signed char)-110;
unsigned long long int var_13 = 8850642419636019211ULL;
int zero = 0;
int var_14 = 174463838;
int var_15 = -486909599;
unsigned long long int var_16 = 3383646659304589786ULL;
signed char var_17 = (signed char)-123;
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
