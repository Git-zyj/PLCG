#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
unsigned long long int var_1 = 16298977428202068791ULL;
int var_2 = -1357028099;
short var_4 = (short)-30795;
unsigned long long int var_5 = 14772691677198891749ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)7442;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_14 = -2081027390;
_Bool var_15 = (_Bool)0;
int var_16 = 1573695586;
int var_17 = -1502529558;
long long int var_18 = -4338346927933294807LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
