#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -205382944;
unsigned int var_1 = 1464956956U;
signed char var_2 = (signed char)-70;
unsigned int var_3 = 3253348223U;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-101;
short var_6 = (short)-18133;
unsigned short var_7 = (unsigned short)4294;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)37;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-78;
unsigned short var_13 = (unsigned short)10599;
signed char var_14 = (signed char)23;
long long int var_15 = -763496659462125686LL;
int zero = 0;
unsigned short var_16 = (unsigned short)28936;
unsigned short var_17 = (unsigned short)32325;
int var_18 = 1923232971;
unsigned char var_19 = (unsigned char)6;
int var_20 = -1885581239;
unsigned int var_21 = 2249038766U;
long long int var_22 = -6881212559139932865LL;
unsigned short var_23 = (unsigned short)13432;
long long int var_24 = 5351894700196022876LL;
int var_25 = -81634244;
short var_26 = (short)5659;
_Bool var_27 = (_Bool)1;
unsigned long long int var_28 = 6202235214093579463ULL;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)1;
long long int var_31 = -7327356722443133686LL;
unsigned char var_32 = (unsigned char)8;
int var_33 = -1498009736;
unsigned long long int var_34 = 16349274703207835845ULL;
unsigned short var_35 = (unsigned short)11938;
unsigned short var_36 = (unsigned short)61260;
unsigned long long int var_37 = 4495415526788716015ULL;
signed char arr_0 [11] [11] ;
signed char arr_1 [11] ;
signed char arr_4 [11] [11] [11] ;
unsigned char arr_7 [11] ;
unsigned int arr_9 [11] ;
unsigned int arr_10 [11] [11] [11] [11] [11] [11] ;
unsigned short arr_11 [11] ;
int arr_20 [11] [11] [11] [11] [11] ;
unsigned short arr_22 [11] ;
unsigned long long int arr_23 [11] [11] [11] ;
long long int arr_2 [11] [11] ;
signed char arr_24 [11] ;
short arr_25 [11] ;
_Bool arr_28 [11] [11] [11] ;
unsigned char arr_29 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)94;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 2523444906U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1364344676U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)5030 : (unsigned short)2484;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 864143022 : -2110262131;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23803 : (unsigned short)11143;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4878425949532874261ULL : 2543350509932624998ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 8478442928574949197LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_25 [i_0] = (short)16459;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (unsigned char)216 : (unsigned char)181;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
