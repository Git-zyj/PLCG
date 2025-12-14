#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)47;
unsigned short var_3 = (unsigned short)62514;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)7427;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 2212692795501376369ULL;
int zero = 0;
short var_17 = (short)28989;
signed char var_18 = (signed char)-80;
unsigned int var_19 = 3327957177U;
unsigned int var_20 = 3484006045U;
unsigned short var_21 = (unsigned short)55332;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
