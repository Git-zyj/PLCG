#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)50322;
long long int var_6 = 9129460130004529757LL;
int var_8 = 429572573;
unsigned int var_11 = 496360695U;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)-105;
int var_19 = 2139381880;
unsigned short var_20 = (unsigned short)27858;
int var_21 = -263749026;
unsigned long long int var_22 = 14816699802362572941ULL;
unsigned long long int var_23 = 6688754490748680319ULL;
_Bool arr_0 [25] ;
short arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (short)2258;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
