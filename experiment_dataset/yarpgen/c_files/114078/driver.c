#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -860936911;
int var_2 = 1905163770;
_Bool var_3 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-7391;
unsigned long long int var_13 = 1223931449364087153ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)65276;
short var_16 = (short)606;
unsigned long long int var_17 = 7388216166019036864ULL;
int var_18 = 1335606273;
short var_19 = (short)16243;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
