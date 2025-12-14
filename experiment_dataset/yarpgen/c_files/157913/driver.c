#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)62730;
int var_5 = 1649942431;
long long int var_8 = -7837365841710204264LL;
unsigned short var_9 = (unsigned short)40609;
signed char var_10 = (signed char)4;
unsigned long long int var_12 = 13808114672796613626ULL;
unsigned short var_13 = (unsigned short)50033;
unsigned short var_16 = (unsigned short)63791;
unsigned long long int var_17 = 16065460384986995320ULL;
unsigned short var_18 = (unsigned short)10524;
unsigned long long int var_19 = 14915119522938465093ULL;
int zero = 0;
int var_20 = 288119294;
unsigned int var_21 = 3867798350U;
unsigned short var_22 = (unsigned short)12417;
unsigned char var_23 = (unsigned char)251;
short var_24 = (short)13166;
signed char var_25 = (signed char)-76;
unsigned long long int var_26 = 16587476905775079674ULL;
_Bool var_27 = (_Bool)1;
unsigned short var_28 = (unsigned short)4193;
signed char var_29 = (signed char)39;
unsigned long long int arr_0 [23] ;
unsigned short arr_6 [23] [23] ;
_Bool arr_16 [18] ;
unsigned char arr_10 [23] [23] [23] ;
long long int arr_17 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 16422067376158915345ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)60078;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 820765633830918419LL : 224904217393251782LL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
