#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3805365897U;
short var_1 = (short)-16140;
unsigned long long int var_5 = 5290597334989228644ULL;
short var_6 = (short)-29868;
unsigned int var_8 = 2432920957U;
short var_14 = (short)-14100;
short var_15 = (short)30315;
int zero = 0;
short var_17 = (short)28721;
unsigned long long int var_18 = 13277287131577040893ULL;
short var_19 = (short)-5614;
short var_20 = (short)-24884;
unsigned int var_21 = 3578413675U;
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
