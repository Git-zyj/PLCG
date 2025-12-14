#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -153154089;
short var_5 = (short)-32761;
short var_8 = (short)-406;
int var_10 = 293396159;
long long int var_13 = 2297365058439204331LL;
signed char var_14 = (signed char)-9;
int zero = 0;
signed char var_15 = (signed char)-125;
_Bool var_16 = (_Bool)1;
short var_17 = (short)23613;
unsigned char var_18 = (unsigned char)0;
short var_19 = (short)-5816;
signed char var_20 = (signed char)93;
signed char var_21 = (signed char)0;
signed char var_22 = (signed char)76;
short var_23 = (short)-18371;
short var_24 = (short)15875;
unsigned int var_25 = 2840136309U;
_Bool var_26 = (_Bool)1;
unsigned int arr_2 [14] ;
signed char arr_13 [14] [14] ;
long long int arr_9 [14] ;
signed char arr_10 [14] ;
short arr_14 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 911501114U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -2645107105267040827LL : 327047665255000402LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-35 : (signed char)-112;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (short)8534;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
