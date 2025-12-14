#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4240812144U;
int var_3 = 1235332166;
unsigned long long int var_5 = 13536665858922000108ULL;
long long int var_6 = 6419676547082771150LL;
signed char var_7 = (signed char)113;
unsigned char var_8 = (unsigned char)76;
signed char var_12 = (signed char)102;
unsigned long long int var_13 = 4947760919006913271ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)139;
unsigned char var_15 = (unsigned char)190;
short var_16 = (short)-6222;
unsigned char var_17 = (unsigned char)103;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)27226;
signed char var_20 = (signed char)18;
int var_21 = -183309892;
_Bool var_22 = (_Bool)0;
unsigned char arr_7 [19] [19] ;
int arr_8 [19] [19] [19] [19] [19] ;
signed char arr_9 [19] [19] [19] [19] [19] [19] [19] ;
unsigned short arr_10 [19] [19] [19] [19] ;
unsigned short arr_13 [20] [20] ;
unsigned long long int arr_16 [20] [20] ;
short arr_17 [20] [20] [20] [20] ;
signed char arr_22 [20] [20] ;
short arr_24 [20] [20] [20] [20] [20] [20] [20] ;
unsigned long long int arr_30 [24] ;
_Bool arr_31 [24] ;
unsigned short arr_11 [19] ;
short arr_14 [20] ;
long long int arr_27 [20] ;
unsigned long long int arr_28 [20] ;
_Bool arr_29 [20] [20] ;
long long int arr_32 [24] [24] ;
unsigned char arr_33 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = 532766417;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (signed char)20 : (signed char)89;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned short)14238;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)22374;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = 4205042773130595228ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (short)-7275;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)29772;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = 3465439444391841804ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_31 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52990 : (unsigned short)24458;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (short)-15335;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = 8293238613928252344LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = 6676271758537215955ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_32 [i_0] [i_1] = 1075055844418375312LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_33 [i_0] = (unsigned char)153;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
