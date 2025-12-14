#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
int var_1 = 1559738923;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)9155;
signed char var_6 = (signed char)-126;
unsigned long long int var_10 = 17894014678642476837ULL;
long long int var_11 = 3682891848137340102LL;
_Bool var_15 = (_Bool)0;
short var_19 = (short)-6145;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -2075594695;
signed char var_22 = (signed char)49;
short var_23 = (short)-14943;
long long int var_24 = -278373044501019680LL;
unsigned char var_25 = (unsigned char)113;
short var_26 = (short)17473;
unsigned long long int var_27 = 17207679612822705503ULL;
short var_28 = (short)21345;
int var_29 = 1552242493;
short var_30 = (short)11364;
unsigned short var_31 = (unsigned short)30985;
int var_32 = -1210232229;
unsigned short var_33 = (unsigned short)3270;
signed char var_34 = (signed char)23;
int var_35 = 431637947;
unsigned short var_36 = (unsigned short)53071;
signed char var_37 = (signed char)127;
signed char var_38 = (signed char)76;
unsigned short var_39 = (unsigned short)5744;
unsigned short var_40 = (unsigned short)34340;
signed char arr_1 [19] [19] ;
signed char arr_2 [19] [19] ;
short arr_3 [19] ;
_Bool arr_5 [18] ;
short arr_6 [17] [17] ;
signed char arr_8 [17] ;
unsigned short arr_9 [17] ;
_Bool arr_12 [13] [13] ;
unsigned long long int arr_13 [13] [13] ;
unsigned short arr_14 [13] [13] [13] ;
signed char arr_15 [13] [13] [13] ;
unsigned short arr_21 [13] ;
signed char arr_25 [13] [13] [13] [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (short)-16089;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-917;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned short)28674;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_13 [i_0] [i_1] = 3176922021252988179ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned short)62683;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-114 : (signed char)-16;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (unsigned short)19730;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)-82;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
