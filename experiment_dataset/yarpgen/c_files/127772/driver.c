#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-5;
signed char var_3 = (signed char)24;
signed char var_4 = (signed char)-46;
unsigned int var_7 = 938948955U;
signed char var_8 = (signed char)87;
unsigned int var_9 = 1604170955U;
unsigned short var_10 = (unsigned short)59720;
int zero = 0;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)2;
unsigned short var_13 = (unsigned short)5154;
long long int var_14 = -4390350179557270113LL;
unsigned int var_15 = 1350658081U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
