#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 809504820;
signed char var_1 = (signed char)-28;
short var_2 = (short)8325;
int var_3 = -222471792;
unsigned int var_4 = 539116548U;
long long int var_6 = -8154574846770096820LL;
unsigned long long int var_8 = 16244857064054860093ULL;
unsigned long long int var_9 = 3851861323493162556ULL;
int zero = 0;
long long int var_11 = -1036782131912194216LL;
unsigned int var_12 = 1419259477U;
unsigned long long int var_13 = 3830535324217959805ULL;
unsigned long long int var_14 = 12620835118492412846ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
