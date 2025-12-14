#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)59548;
unsigned short var_9 = (unsigned short)39348;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)56865;
unsigned long long int var_12 = 5200998703479400431ULL;
_Bool var_17 = (_Bool)0;
long long int var_19 = -415899393470889187LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -6663126521985437991LL;
unsigned int var_22 = 1235615275U;
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
