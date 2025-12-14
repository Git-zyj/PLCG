#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)153;
int var_4 = -821810323;
unsigned int var_5 = 3611814015U;
unsigned long long int var_6 = 12755028896646331499ULL;
long long int var_8 = 2810969201053182008LL;
signed char var_9 = (signed char)-102;
int zero = 0;
int var_10 = 1086791669;
int var_11 = 1686002967;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
