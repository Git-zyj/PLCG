#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6208910336252271624ULL;
long long int var_1 = -5569493822116203973LL;
unsigned short var_2 = (unsigned short)8312;
int var_4 = -1276915716;
unsigned int var_5 = 1241018316U;
short var_6 = (short)30153;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3038856757U;
int zero = 0;
short var_10 = (short)11799;
long long int var_11 = -5237454238867690653LL;
short var_12 = (short)-19689;
short var_13 = (short)-30504;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
