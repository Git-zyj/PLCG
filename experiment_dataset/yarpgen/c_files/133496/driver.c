#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-7557;
signed char var_8 = (signed char)-75;
int var_13 = 351804235;
unsigned char var_14 = (unsigned char)116;
short var_17 = (short)7919;
signed char var_18 = (signed char)-55;
int zero = 0;
long long int var_19 = 117792967423274793LL;
int var_20 = 217080132;
long long int var_21 = 4523868030125750018LL;
_Bool arr_0 [18] ;
long long int arr_2 [18] ;
unsigned long long int arr_3 [18] ;
short arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -5384162108017137742LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 5153562761881106072ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)17308 : (short)29139;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
