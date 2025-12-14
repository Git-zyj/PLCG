#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10276008315375551092ULL;
short var_3 = (short)26289;
long long int var_8 = -6776231504791824875LL;
unsigned short var_9 = (unsigned short)54854;
signed char var_11 = (signed char)-125;
unsigned short var_13 = (unsigned short)29096;
_Bool var_14 = (_Bool)1;
long long int var_15 = -3356677220746937159LL;
unsigned short var_17 = (unsigned short)41674;
int zero = 0;
signed char var_19 = (signed char)-82;
long long int var_20 = 9075195876378239583LL;
signed char var_21 = (signed char)101;
long long int var_22 = -3556267842606228275LL;
unsigned long long int var_23 = 7658860576356991061ULL;
unsigned long long int var_24 = 12642944999711180774ULL;
short arr_1 [13] ;
unsigned char arr_2 [13] ;
signed char arr_3 [13] ;
long long int arr_4 [13] [13] [13] [13] ;
unsigned long long int arr_6 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (short)-1544;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4446331859879403106LL : -3963101060375956726LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 6724526318048435602ULL : 2779142459212599841ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_6 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
