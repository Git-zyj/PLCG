#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57951;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)54577;
unsigned long long int var_6 = 10742083237724107818ULL;
long long int var_8 = -151123619124380505LL;
int var_10 = -46442700;
int var_12 = 1972460041;
unsigned long long int var_13 = 11862282540112907152ULL;
long long int var_14 = 6949235034362598431LL;
int zero = 0;
unsigned char var_20 = (unsigned char)64;
signed char var_21 = (signed char)-4;
long long int var_22 = -3595274088483610807LL;
unsigned char var_23 = (unsigned char)183;
unsigned long long int var_24 = 3922598927249370967ULL;
signed char var_25 = (signed char)55;
long long int var_26 = -7870668157156199863LL;
unsigned char var_27 = (unsigned char)210;
unsigned int var_28 = 3125554243U;
unsigned char var_29 = (unsigned char)9;
signed char var_30 = (signed char)76;
unsigned long long int var_31 = 8630359622358958295ULL;
unsigned char arr_0 [18] ;
unsigned int arr_3 [18] ;
unsigned char arr_6 [25] ;
unsigned long long int arr_7 [25] ;
unsigned int arr_8 [25] ;
unsigned char arr_9 [25] ;
unsigned char arr_10 [25] ;
long long int arr_4 [18] [18] ;
unsigned short arr_11 [25] ;
unsigned short arr_18 [22] ;
unsigned char arr_23 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 3614577260U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)170 : (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1113865283728533701ULL : 11719518658261959266ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = 3043003858U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)153 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)102 : (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 8323325228153158468LL : 1419222817221002823LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)48012 : (unsigned short)17180;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (unsigned short)25582;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = (unsigned char)51;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_23 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
