#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1979779905U;
unsigned int var_9 = 1897782220U;
unsigned int var_10 = 2634227275U;
signed char var_11 = (signed char)-80;
signed char var_14 = (signed char)89;
int var_17 = -2100169437;
_Bool var_19 = (_Bool)0;
int zero = 0;
int var_20 = 1858682618;
long long int var_21 = -463446570143132891LL;
unsigned short var_22 = (unsigned short)42752;
unsigned short var_23 = (unsigned short)40363;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
