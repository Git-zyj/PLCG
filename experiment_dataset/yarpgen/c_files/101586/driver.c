#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23708;
short var_2 = (short)31899;
unsigned long long int var_5 = 5227702413224263488ULL;
unsigned long long int var_6 = 16921046224006177990ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-30862;
unsigned long long int var_12 = 9455385560396260506ULL;
int var_13 = -1289911285;
int var_14 = -990881951;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
