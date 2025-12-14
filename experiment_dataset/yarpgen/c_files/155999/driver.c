#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -878377258992290751LL;
unsigned int var_1 = 2802321035U;
int var_4 = 375358970;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3504510792U;
short var_11 = (short)30527;
int zero = 0;
unsigned long long int var_14 = 11765167647815056362ULL;
signed char var_15 = (signed char)106;
unsigned int var_16 = 688046780U;
signed char var_17 = (signed char)37;
long long int var_18 = 5690993802379951626LL;
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
