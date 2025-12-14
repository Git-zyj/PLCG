#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 395187828211051424LL;
unsigned int var_2 = 1655435109U;
long long int var_4 = 5156932569932469242LL;
long long int var_5 = 1617465424367599801LL;
signed char var_6 = (signed char)113;
int var_7 = -695881389;
unsigned int var_8 = 3322517407U;
signed char var_9 = (signed char)-114;
int zero = 0;
unsigned int var_10 = 2514310854U;
unsigned char var_11 = (unsigned char)4;
short var_12 = (short)3535;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
