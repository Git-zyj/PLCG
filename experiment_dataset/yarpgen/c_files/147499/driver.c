#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18247022659989693505ULL;
int var_2 = -1726539423;
unsigned int var_3 = 1082397644U;
long long int var_4 = 1505441697641458576LL;
long long int var_5 = 460451148367488579LL;
unsigned int var_6 = 2780207196U;
signed char var_9 = (signed char)57;
_Bool var_10 = (_Bool)0;
unsigned char var_16 = (unsigned char)31;
long long int var_18 = 2969904058872344330LL;
int zero = 0;
unsigned short var_20 = (unsigned short)28015;
int var_21 = 1150947095;
unsigned int var_22 = 681312973U;
unsigned int var_23 = 3572613300U;
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
