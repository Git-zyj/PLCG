#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)58059;
signed char var_9 = (signed char)55;
unsigned char var_10 = (unsigned char)107;
unsigned int var_11 = 2455054307U;
signed char var_13 = (signed char)-117;
unsigned short var_14 = (unsigned short)22003;
int zero = 0;
unsigned char var_16 = (unsigned char)148;
unsigned char var_17 = (unsigned char)121;
signed char var_18 = (signed char)28;
signed char var_19 = (signed char)-52;
short var_20 = (short)-8695;
short var_21 = (short)-29896;
unsigned int var_22 = 3118876547U;
signed char var_23 = (signed char)44;
unsigned char var_24 = (unsigned char)78;
unsigned char var_25 = (unsigned char)243;
signed char var_26 = (signed char)-8;
unsigned char var_27 = (unsigned char)93;
short var_28 = (short)-7725;
_Bool var_29 = (_Bool)1;
signed char arr_0 [22] [22] ;
short arr_1 [22] ;
unsigned int arr_2 [22] ;
unsigned int arr_4 [22] [22] [22] ;
short arr_10 [13] [13] [13] ;
unsigned long long int arr_11 [13] [13] [13] ;
unsigned long long int arr_18 [13] [13] [13] [13] ;
short arr_14 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-17631;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 674839008U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 3586957866U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)5818;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 18158310237357541231ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 6500852636960536145ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (short)7310;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
