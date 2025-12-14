#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3752099791639362843ULL;
unsigned int var_2 = 1744974834U;
signed char var_4 = (signed char)-74;
signed char var_5 = (signed char)-68;
unsigned short var_8 = (unsigned short)33440;
unsigned long long int var_10 = 7127056998336759452ULL;
int zero = 0;
long long int var_13 = 7731615156011954500LL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3261675325U;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
