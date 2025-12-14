#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -7062934010785467516LL;
signed char var_12 = (signed char)-74;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = -1730202158;
unsigned short var_15 = (unsigned short)29555;
unsigned short var_16 = (unsigned short)51887;
unsigned long long int var_17 = 15707788948554612738ULL;
int var_18 = -869224765;
int var_19 = 1735300199;
int var_20 = 1970453557;
_Bool arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
