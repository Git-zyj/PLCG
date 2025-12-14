#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)19;
unsigned long long int var_1 = 10720389268683106595ULL;
signed char var_2 = (signed char)-15;
unsigned char var_3 = (unsigned char)173;
unsigned long long int var_4 = 58524380503444060ULL;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)8;
unsigned int var_7 = 2120640846U;
unsigned int var_8 = 3687220205U;
unsigned int var_9 = 2946758285U;
long long int var_10 = 1336247499444969740LL;
unsigned char var_11 = (unsigned char)126;
long long int var_13 = -7028960865609038110LL;
signed char var_15 = (signed char)-49;
int zero = 0;
unsigned short var_16 = (unsigned short)43484;
short var_17 = (short)30830;
short var_18 = (short)-6739;
short var_19 = (short)11833;
int var_20 = 225243528;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 15635641461215483089ULL;
short var_23 = (short)-11974;
long long int var_24 = 7643511983591274932LL;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 10400860193712060997ULL;
unsigned long long int var_27 = 9897996337598278554ULL;
unsigned long long int var_28 = 1910098968373910410ULL;
long long int var_29 = 503342515019221529LL;
short var_30 = (short)-14949;
signed char var_31 = (signed char)71;
signed char arr_0 [22] ;
long long int arr_2 [22] [22] ;
short arr_3 [22] ;
unsigned short arr_11 [25] [25] ;
unsigned long long int arr_17 [25] [25] [25] [25] [25] [25] ;
unsigned int arr_18 [25] ;
signed char arr_21 [21] ;
unsigned long long int arr_29 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 8406848607552008424LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)13905;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)5082;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 2732657021117467074ULL : 17195015093733043810ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_18 [i_0] = 1621666022U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (signed char)-68 : (signed char)-33;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? 3009972572908140954ULL : 14200207977986369633ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_18 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
