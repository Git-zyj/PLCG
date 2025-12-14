#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14096564278629307176ULL;
unsigned int var_2 = 1296282734U;
long long int var_4 = 3589743180228241441LL;
signed char var_5 = (signed char)-96;
unsigned short var_6 = (unsigned short)22312;
short var_8 = (short)-19383;
short var_10 = (short)-24813;
short var_12 = (short)18926;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_14 = (short)25465;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)190;
int var_18 = -699563336;
unsigned char var_19 = (unsigned char)244;
unsigned short var_20 = (unsigned short)63402;
unsigned short var_21 = (unsigned short)17060;
long long int var_22 = 1633802373040195628LL;
unsigned short var_23 = (unsigned short)65342;
signed char var_24 = (signed char)36;
unsigned short var_25 = (unsigned short)64428;
long long int var_26 = -5377535136814899172LL;
long long int var_27 = 2115710014145972278LL;
unsigned short arr_0 [12] [12] ;
short arr_1 [12] ;
signed char arr_4 [12] [12] [12] ;
short arr_5 [12] [12] [12] ;
long long int arr_6 [12] [12] [12] ;
short arr_7 [12] [12] [12] ;
short arr_9 [12] [12] ;
_Bool arr_10 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)46608;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)2979;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-56 : (signed char)-98;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-5858;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 4657874057522035126LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)24596 : (short)-14166;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-18530 : (short)31456;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
