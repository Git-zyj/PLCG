#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
long long int var_1 = 8270843446881394576LL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)1;
int var_4 = 412010401;
unsigned int var_5 = 4127649318U;
_Bool var_6 = (_Bool)1;
int var_7 = -158902296;
signed char var_8 = (signed char)-47;
unsigned short var_9 = (unsigned short)40122;
unsigned char var_10 = (unsigned char)206;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 12362040455000089516ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)19743;
short var_15 = (short)4904;
unsigned char var_16 = (unsigned char)167;
int zero = 0;
long long int var_17 = 8345637326327423383LL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 31678874128490984LL;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)227;
unsigned char var_22 = (unsigned char)198;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 12518688542218559551ULL;
unsigned long long int var_25 = 1061564164106340898ULL;
unsigned short var_26 = (unsigned short)18607;
unsigned long long int var_27 = 15380041713148806113ULL;
signed char var_28 = (signed char)-6;
signed char var_29 = (signed char)-57;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)38422;
short var_32 = (short)19861;
signed char var_33 = (signed char)108;
signed char var_34 = (signed char)-64;
signed char arr_2 [23] [23] ;
signed char arr_11 [15] [15] [15] ;
_Bool arr_15 [10] [10] ;
_Bool arr_16 [10] [10] ;
short arr_28 [20] [20] [20] [20] [20] [20] [20] ;
unsigned int arr_31 [20] ;
signed char arr_36 [19] ;
unsigned long long int arr_37 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_16 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (short)-30512 : (short)-23312;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 12356185U : 787760208U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_36 [i_0] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_37 [i_0] = 3774690698951749155ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
