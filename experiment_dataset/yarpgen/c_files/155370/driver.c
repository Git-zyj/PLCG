#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13974306938641654267ULL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)10;
unsigned short var_6 = (unsigned short)20449;
long long int var_9 = -2878729669304949504LL;
long long int var_12 = -4840829839496533694LL;
unsigned short var_13 = (unsigned short)29069;
int zero = 0;
int var_16 = -1522269240;
int var_17 = -80393433;
_Bool var_18 = (_Bool)1;
int var_19 = -1384150803;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
