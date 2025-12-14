#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)123;
signed char var_2 = (signed char)-8;
short var_4 = (short)17976;
unsigned long long int var_5 = 2527093388792772497ULL;
_Bool var_6 = (_Bool)1;
long long int var_8 = 6180293593726880092LL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-1051;
unsigned char var_12 = (unsigned char)14;
unsigned int var_14 = 247488574U;
signed char var_16 = (signed char)74;
int zero = 0;
unsigned int var_19 = 783637910U;
unsigned char var_20 = (unsigned char)115;
long long int var_21 = 6610170952872081621LL;
unsigned short var_22 = (unsigned short)11805;
signed char var_23 = (signed char)-105;
int var_24 = -1056544484;
int var_25 = -1855739555;
unsigned char var_26 = (unsigned char)31;
unsigned long long int var_27 = 1931886457911142122ULL;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)52;
short var_30 = (short)16734;
short var_31 = (short)808;
_Bool arr_0 [21] ;
long long int arr_1 [21] [21] ;
unsigned char arr_2 [17] ;
int arr_3 [17] ;
unsigned char arr_7 [17] ;
short arr_9 [17] [17] [17] ;
_Bool arr_11 [17] [17] [17] ;
long long int arr_12 [17] ;
unsigned char arr_15 [17] [17] [17] [17] [17] ;
int arr_19 [17] [17] ;
unsigned char arr_21 [17] ;
signed char arr_24 [17] [17] ;
short arr_25 [17] ;
unsigned long long int arr_5 [17] ;
unsigned char arr_6 [17] [17] ;
unsigned char arr_16 [17] ;
unsigned int arr_17 [17] [17] [17] [17] [17] [17] ;
unsigned short arr_22 [17] ;
int arr_27 [17] ;
unsigned char arr_37 [17] [17] [17] [17] ;
unsigned long long int arr_38 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 1703204414983553771LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -644492637;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-30977;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 5629024783025626949LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = -1915875878;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (short)1134;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 859426811159853558ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1610978231U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = (unsigned short)38497;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_27 [i_0] = 95248306;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_38 [i_0] = 4236086099687982275ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_38 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
