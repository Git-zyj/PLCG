#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-18;
short var_7 = (short)12801;
long long int var_8 = -8253562676653258275LL;
short var_10 = (short)-17919;
long long int var_13 = 2563663209423524466LL;
int var_14 = 210378233;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 310683003U;
int zero = 0;
signed char var_19 = (signed char)108;
signed char var_20 = (signed char)125;
unsigned int var_21 = 4231322279U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
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
