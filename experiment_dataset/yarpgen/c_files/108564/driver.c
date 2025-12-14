#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_3 = -2111173034;
unsigned short var_8 = (unsigned short)42675;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)48355;
signed char var_12 = (signed char)-73;
int var_13 = -1281119599;
int zero = 0;
unsigned long long int var_14 = 4971936524241507405ULL;
unsigned int var_15 = 4041922171U;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
