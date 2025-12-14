#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 7811650584496905094LL;
long long int var_12 = 8654638425557061134LL;
short var_13 = (short)28016;
short var_16 = (short)-30735;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)101;
signed char var_20 = (signed char)14;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
