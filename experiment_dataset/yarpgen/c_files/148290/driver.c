#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 478130204;
unsigned long long int var_3 = 155411457679332169ULL;
unsigned long long int var_6 = 13904673229779442918ULL;
signed char var_9 = (signed char)43;
int var_11 = -997010947;
long long int var_12 = -7709993184827039512LL;
long long int var_13 = 6367846156104598393LL;
int zero = 0;
unsigned short var_15 = (unsigned short)49151;
signed char var_16 = (signed char)-106;
int var_17 = 1070850886;
unsigned long long int var_18 = 68151717088832891ULL;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)65204;
unsigned short var_21 = (unsigned short)23254;
int var_22 = -2133252936;
int var_23 = -1782209438;
int arr_0 [23] [23] ;
signed char arr_1 [23] ;
unsigned long long int arr_2 [23] ;
unsigned short arr_3 [23] ;
unsigned long long int arr_8 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 1368377819;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)116;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 6950859351125408205ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)3757;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 13224195058477749289ULL : 5158046059693323672ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
