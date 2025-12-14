#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-7325;
signed char var_2 = (signed char)-22;
long long int var_5 = -4100319453300715712LL;
long long int var_6 = -64000893922430462LL;
unsigned int var_8 = 4149674703U;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-46;
int zero = 0;
unsigned long long int var_13 = 15514077286421173159ULL;
unsigned int var_14 = 978774700U;
void init() {
}

void checksum() {
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
