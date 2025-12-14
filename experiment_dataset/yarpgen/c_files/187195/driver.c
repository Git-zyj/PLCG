#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
unsigned long long int var_1 = 2789430107803915494ULL;
unsigned int var_5 = 343756142U;
short var_8 = (short)-6900;
short var_10 = (short)8383;
unsigned short var_11 = (unsigned short)20573;
long long int var_15 = -8444810027643152422LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)59;
short var_21 = (short)26175;
signed char var_22 = (signed char)-3;
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
