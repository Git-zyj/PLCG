#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 5026267709763167176LL;
long long int var_3 = 8152537549543439883LL;
unsigned int var_5 = 3397006552U;
long long int var_7 = 5493568329280310977LL;
unsigned int var_8 = 3972297148U;
long long int var_9 = -4564607243031458114LL;
long long int var_10 = 8199994555650715546LL;
long long int var_13 = -208703266753933024LL;
long long int var_17 = 6570494533624414017LL;
int zero = 0;
unsigned int var_18 = 3140356940U;
short var_19 = (short)7851;
long long int var_20 = 2749354320144129726LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
