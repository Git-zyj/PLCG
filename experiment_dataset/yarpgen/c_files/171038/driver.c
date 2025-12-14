#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
_Bool var_1 = (_Bool)0;
long long int var_2 = 4322181224790154319LL;
_Bool var_7 = (_Bool)1;
int var_8 = -1475432276;
unsigned char var_10 = (unsigned char)94;
unsigned short var_14 = (unsigned short)57036;
unsigned char var_17 = (unsigned char)86;
int zero = 0;
unsigned char var_19 = (unsigned char)43;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 4261790807182668651ULL;
unsigned long long int var_22 = 12620607231441043963ULL;
short var_23 = (short)-13718;
unsigned char arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
unsigned short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)243 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 12650506554095826667ULL : 3612594195199395650ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44408 : (unsigned short)19336;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
