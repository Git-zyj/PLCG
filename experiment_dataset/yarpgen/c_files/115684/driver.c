#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 236687628;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)20;
unsigned long long int var_3 = 10137903360171524587ULL;
short var_6 = (short)31151;
unsigned int var_7 = 2069110607U;
_Bool var_8 = (_Bool)1;
unsigned int var_10 = 48097966U;
int zero = 0;
unsigned long long int var_11 = 18351939765141534201ULL;
long long int var_12 = -256428258678761920LL;
signed char var_13 = (signed char)10;
void init() {
}

void checksum() {
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
