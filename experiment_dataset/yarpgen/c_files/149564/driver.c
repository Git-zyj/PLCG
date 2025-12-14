#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8126732553020686730LL;
unsigned long long int var_7 = 9015220284206103298ULL;
int var_8 = -642796065;
int var_10 = 1840482664;
signed char var_11 = (signed char)-46;
short var_13 = (short)27646;
unsigned int var_14 = 4256851216U;
signed char var_15 = (signed char)69;
int zero = 0;
signed char var_17 = (signed char)110;
_Bool var_18 = (_Bool)1;
int var_19 = -424739360;
long long int var_20 = -1518180523904935593LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
