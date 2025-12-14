#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 528672030;
signed char var_2 = (signed char)126;
unsigned long long int var_3 = 13859310681481126928ULL;
unsigned long long int var_5 = 10930096689474253256ULL;
signed char var_6 = (signed char)78;
unsigned int var_7 = 4145358393U;
unsigned int var_8 = 2052419046U;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-100;
unsigned long long int var_12 = 3590321408225641660ULL;
unsigned char var_13 = (unsigned char)116;
unsigned short var_14 = (unsigned short)48982;
signed char var_15 = (signed char)23;
long long int var_16 = 518329513329785312LL;
unsigned short var_17 = (unsigned short)7242;
unsigned char var_18 = (unsigned char)52;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-64;
int var_21 = -2082892230;
int var_22 = 1966456746;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)14585;
long long int var_25 = 842186979502098116LL;
unsigned short var_26 = (unsigned short)19935;
_Bool var_27 = (_Bool)0;
long long int arr_0 [21] [21] ;
_Bool arr_1 [21] [21] ;
int arr_3 [20] ;
short arr_4 [20] [20] ;
unsigned int arr_5 [20] ;
unsigned short arr_9 [23] [23] ;
signed char arr_11 [23] ;
unsigned long long int arr_12 [23] ;
_Bool arr_16 [23] [23] [23] ;
signed char arr_17 [23] [23] [23] ;
unsigned short arr_21 [23] [23] [23] [23] ;
_Bool arr_8 [20] [20] ;
_Bool arr_25 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 6211283991372930035LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = -990652569;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)4492;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 4124345945U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)39308 : (unsigned short)47850;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)-119 : (signed char)-127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = 9829690004528225878ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)50385 : (unsigned short)25363;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
