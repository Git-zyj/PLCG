#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8426291762329926053LL;
short var_1 = (short)21722;
unsigned long long int var_4 = 7676917400750650746ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 3647677612736988041ULL;
int var_7 = 827969922;
long long int var_8 = -2204793026435141112LL;
int zero = 0;
signed char var_10 = (signed char)110;
_Bool var_11 = (_Bool)1;
int var_12 = 1295376527;
long long int var_13 = 1419814838498795764LL;
unsigned int var_14 = 3575369524U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
