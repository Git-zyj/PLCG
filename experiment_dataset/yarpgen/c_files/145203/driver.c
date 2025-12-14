#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1402112443U;
unsigned short var_1 = (unsigned short)12142;
unsigned char var_3 = (unsigned char)103;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)12;
unsigned int var_8 = 608067433U;
unsigned char var_10 = (unsigned char)179;
unsigned short var_12 = (unsigned short)48699;
unsigned short var_13 = (unsigned short)18290;
unsigned long long int var_18 = 6196942559606947334ULL;
unsigned short var_19 = (unsigned short)42690;
int zero = 0;
signed char var_20 = (signed char)-10;
_Bool var_21 = (_Bool)0;
long long int var_22 = -7500495440649227585LL;
unsigned char var_23 = (unsigned char)94;
unsigned char var_24 = (unsigned char)103;
short var_25 = (short)30158;
signed char var_26 = (signed char)-46;
unsigned long long int var_27 = 14410859292549598142ULL;
long long int var_28 = -5656747173926638299LL;
signed char var_29 = (signed char)109;
unsigned char var_30 = (unsigned char)117;
long long int var_31 = -4100021407472022213LL;
unsigned char var_32 = (unsigned char)125;
unsigned short var_33 = (unsigned short)60724;
short var_34 = (short)26367;
short var_35 = (short)18982;
long long int var_36 = -7198375365482570910LL;
unsigned long long int var_37 = 58199115800764062ULL;
short var_38 = (short)4209;
short var_39 = (short)27201;
unsigned int var_40 = 3330569328U;
unsigned int arr_0 [13] ;
int arr_2 [13] ;
unsigned long long int arr_6 [13] ;
unsigned long long int arr_8 [13] [13] [13] [13] ;
signed char arr_9 [13] [13] ;
unsigned short arr_10 [13] ;
unsigned char arr_11 [13] [13] [13] [13] [13] ;
int arr_17 [13] [13] [13] [13] [13] ;
signed char arr_24 [13] [13] [13] [13] ;
signed char arr_28 [10] ;
unsigned char arr_29 [10] [10] ;
long long int arr_3 [13] ;
long long int arr_4 [13] ;
unsigned long long int arr_5 [13] ;
unsigned long long int arr_23 [13] [13] ;
_Bool arr_26 [13] [13] [13] [13] ;
unsigned int arr_27 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 2541323471U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -1781692941;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3776891057958399849ULL : 2887986689467028547ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 9028462083798426399ULL : 16060750555498885199ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned short)13588;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (unsigned char)158 : (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = -1253253773;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_28 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 5975739879790573387LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 4266516590749932944LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 14644861558014959864ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? 12938055668447743191ULL : 8670287871399054655ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 448562155U : 1556658975U;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
