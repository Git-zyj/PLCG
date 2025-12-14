#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-8;
_Bool var_3 = (_Bool)0;
unsigned short var_6 = (unsigned short)50537;
long long int var_7 = -3444504714177246626LL;
signed char var_9 = (signed char)65;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-58;
int zero = 0;
signed char var_16 = (signed char)22;
long long int var_17 = -2709560819238833312LL;
long long int var_18 = 5769912092186001579LL;
unsigned short var_19 = (unsigned short)39937;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)25233;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)55;
signed char var_24 = (signed char)13;
unsigned char var_25 = (unsigned char)127;
signed char var_26 = (signed char)88;
int arr_0 [18] ;
long long int arr_1 [18] [18] ;
long long int arr_3 [11] ;
long long int arr_5 [23] [23] ;
int arr_6 [23] ;
unsigned char arr_10 [18] ;
int arr_4 [11] [11] ;
unsigned long long int arr_7 [23] ;
unsigned short arr_11 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 83500244;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 4559934972390872272LL : 3084476165617358375LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7097094494837165710LL : -143430484686247201LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? -3680479316817599165LL : -6521882077826592857LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -1769658677;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 1040533356 : -263609931;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 15413649813465813630ULL : 4606065039140993238ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)24791;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
