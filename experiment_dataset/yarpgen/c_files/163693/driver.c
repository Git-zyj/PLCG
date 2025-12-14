#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7818386620219121663ULL;
unsigned short var_3 = (unsigned short)51431;
signed char var_4 = (signed char)71;
unsigned short var_7 = (unsigned short)58040;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 7963295867149335605ULL;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)60;
signed char var_16 = (signed char)-98;
_Bool arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
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
