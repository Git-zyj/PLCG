#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -299686486;
short var_3 = (short)-19390;
unsigned int var_5 = 1662505198U;
signed char var_6 = (signed char)-9;
short var_8 = (short)24281;
long long int var_9 = 1773989429125991614LL;
int zero = 0;
long long int var_15 = -3704304229071918075LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
