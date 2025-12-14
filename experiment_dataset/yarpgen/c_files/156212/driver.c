#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 9206691324561130024LL;
unsigned char var_2 = (unsigned char)242;
unsigned short var_3 = (unsigned short)11239;
signed char var_4 = (signed char)83;
int var_5 = 132503777;
unsigned long long int var_6 = 1075794656196644329ULL;
int var_7 = 423381117;
unsigned char var_8 = (unsigned char)39;
short var_9 = (short)30167;
int zero = 0;
signed char var_11 = (signed char)-60;
int var_12 = 800252560;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)96;
short var_15 = (short)-8346;
unsigned char var_16 = (unsigned char)144;
short var_17 = (short)-27735;
long long int var_18 = -1039154989767975038LL;
unsigned char var_19 = (unsigned char)105;
signed char var_20 = (signed char)-40;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 11730366506964313381ULL;
unsigned char var_23 = (unsigned char)42;
unsigned long long int var_24 = 1805426414677099182ULL;
unsigned long long int arr_0 [14] [14] ;
unsigned char arr_1 [14] ;
_Bool arr_3 [18] ;
unsigned int arr_4 [18] [18] ;
unsigned char arr_11 [18] [18] [18] [18] [18] [18] ;
unsigned short arr_14 [14] ;
unsigned char arr_16 [14] [14] ;
unsigned char arr_18 [10] ;
_Bool arr_19 [10] ;
signed char arr_13 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = 3242243521414382751ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)147;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 494009297U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)221;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = (unsigned short)8833;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_18 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_19 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (signed char)64;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
