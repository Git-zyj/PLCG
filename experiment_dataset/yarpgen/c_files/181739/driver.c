#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 764983956U;
int var_3 = -1578033542;
long long int var_5 = -3479646602951342343LL;
signed char var_7 = (signed char)-108;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 16159867060152332878ULL;
unsigned long long int var_11 = 8478434332168527483ULL;
unsigned short var_12 = (unsigned short)61616;
int zero = 0;
_Bool var_13 = (_Bool)1;
long long int var_14 = 7120682635466289166LL;
short var_15 = (short)-21718;
unsigned long long int var_16 = 7282856849517652544ULL;
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
