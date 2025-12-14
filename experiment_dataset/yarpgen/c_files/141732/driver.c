#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)140;
int var_1 = -1010279744;
int var_4 = -790763661;
int var_7 = 572891876;
signed char var_8 = (signed char)59;
short var_9 = (short)26334;
unsigned long long int var_10 = 4807288107061236454ULL;
long long int var_11 = -7008142913896372442LL;
int zero = 0;
unsigned int var_14 = 3396437172U;
signed char var_15 = (signed char)20;
unsigned char var_16 = (unsigned char)88;
unsigned char var_17 = (unsigned char)96;
_Bool var_18 = (_Bool)0;
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
