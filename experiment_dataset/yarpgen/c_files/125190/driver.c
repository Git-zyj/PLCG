#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44459;
long long int var_2 = 3414473642346488569LL;
unsigned char var_3 = (unsigned char)88;
signed char var_4 = (signed char)-120;
long long int var_5 = 4980462836089109329LL;
long long int var_6 = -627609553737910061LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -3335282489307318043LL;
short var_10 = (short)10018;
unsigned short var_11 = (unsigned short)20361;
unsigned long long int var_13 = 11409448292989378742ULL;
unsigned short var_15 = (unsigned short)62513;
unsigned short var_16 = (unsigned short)46274;
unsigned short var_17 = (unsigned short)22880;
int zero = 0;
unsigned char var_18 = (unsigned char)58;
signed char var_19 = (signed char)51;
unsigned short var_20 = (unsigned short)55102;
unsigned char arr_0 [10] ;
unsigned char arr_2 [10] ;
_Bool arr_4 [22] ;
_Bool arr_5 [22] ;
signed char arr_6 [22] ;
_Bool arr_11 [15] ;
signed char arr_3 [10] ;
unsigned short arr_7 [22] ;
signed char arr_8 [22] ;
unsigned short arr_9 [22] ;
signed char arr_13 [15] ;
unsigned char arr_14 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)165;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)22891;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (unsigned short)56437;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-73 : (signed char)8;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)7;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
