#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4549;
int var_2 = -793277198;
unsigned char var_4 = (unsigned char)153;
int var_17 = -213255288;
unsigned char var_18 = (unsigned char)15;
int zero = 0;
unsigned short var_19 = (unsigned short)60659;
unsigned long long int var_20 = 117016939250117331ULL;
signed char var_21 = (signed char)-26;
int var_22 = -1249572945;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)14595;
unsigned short var_25 = (unsigned short)29695;
signed char arr_2 [16] ;
unsigned short arr_3 [16] ;
unsigned short arr_6 [11] ;
unsigned char arr_7 [11] ;
long long int arr_8 [11] ;
unsigned short arr_9 [11] [11] ;
unsigned long long int arr_11 [11] [11] [11] ;
unsigned short arr_12 [11] ;
unsigned long long int arr_19 [11] ;
short arr_22 [11] [11] [11] [11] ;
long long int arr_4 [16] ;
signed char arr_13 [11] ;
signed char arr_24 [11] [11] [11] [11] ;
short arr_25 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)31717;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)33296;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = -1529968524340165882LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)7511;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 4280963804598124215ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (unsigned short)42971;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = 9295438972918687933ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (short)24560;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -3416872276695592527LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)11 : (signed char)-104;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)25551 : (short)29113;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_24 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
