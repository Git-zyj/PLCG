#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26423;
long long int var_5 = -6017095466936157266LL;
long long int var_15 = -4757618741394688087LL;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-71;
int zero = 0;
int var_20 = -1992726830;
int var_21 = -79394429;
short var_22 = (short)15248;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
