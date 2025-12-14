#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1745845239;
long long int var_2 = -8863239360229789031LL;
unsigned int var_3 = 2152800936U;
signed char var_5 = (signed char)99;
long long int var_6 = 6847485708417021209LL;
short var_9 = (short)-185;
unsigned long long int var_10 = 3674845083333978088ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-6;
long long int var_15 = -8789920667505970523LL;
unsigned char var_16 = (unsigned char)35;
int var_17 = 1297428115;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 764042742;
unsigned short var_20 = (unsigned short)62283;
short var_21 = (short)-29552;
void init() {
}

void checksum() {
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
