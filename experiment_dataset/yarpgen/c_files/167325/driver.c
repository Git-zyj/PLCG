#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)-4;
short var_4 = (short)-31474;
unsigned long long int var_5 = 3533492177449534209ULL;
int var_6 = -1017722604;
unsigned long long int var_7 = 10002769009328843937ULL;
unsigned int var_10 = 29917756U;
unsigned short var_11 = (unsigned short)5723;
short var_12 = (short)9776;
int zero = 0;
unsigned int var_13 = 1396486331U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 141577451U;
long long int var_16 = -2940221152189865846LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
