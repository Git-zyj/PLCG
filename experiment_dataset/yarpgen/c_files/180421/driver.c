#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9225;
_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)37;
long long int var_6 = 3672803537029916318LL;
unsigned char var_7 = (unsigned char)238;
unsigned char var_10 = (unsigned char)26;
long long int var_11 = -6848059882107877056LL;
unsigned long long int var_12 = 14468080703421739875ULL;
unsigned int var_14 = 1446327885U;
long long int var_16 = 7401178263753984131LL;
unsigned short var_17 = (unsigned short)37806;
unsigned long long int var_18 = 865954895967192829ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-104;
unsigned short var_21 = (unsigned short)58845;
signed char var_22 = (signed char)50;
short var_23 = (short)10232;
unsigned char var_24 = (unsigned char)66;
long long int var_25 = 8468924091197772135LL;
short var_26 = (short)-11659;
signed char var_27 = (signed char)-97;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)69;
unsigned long long int var_30 = 12309668136125165998ULL;
short arr_2 [12] ;
unsigned char arr_6 [12] [12] [12] [12] ;
_Bool arr_12 [12] [12] [12] [12] [12] ;
long long int arr_16 [12] [12] [12] ;
int arr_19 [12] [12] [12] ;
signed char arr_20 [12] ;
unsigned long long int arr_21 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (short)-2020;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = -7835645625760216081LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = -1239049445;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 6157748913297942691ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
