#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1992402815;
short var_2 = (short)29997;
unsigned long long int var_4 = 10530178415236245229ULL;
unsigned int var_5 = 1792602445U;
unsigned long long int var_6 = 8877833226291960374ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)113;
int zero = 0;
int var_13 = 2096063059;
short var_14 = (short)24447;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3785768303U;
_Bool var_18 = (_Bool)0;
long long int var_19 = -3803829478444467076LL;
short arr_1 [17] ;
_Bool arr_2 [17] ;
unsigned int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-32064;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 2446149433U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
