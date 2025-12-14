#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2113314493;
unsigned short var_1 = (unsigned short)57236;
unsigned long long int var_2 = 925559115429520447ULL;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 6488655473660906774ULL;
int var_8 = 1987544620;
unsigned char var_9 = (unsigned char)52;
int var_10 = 1269094117;
long long int var_11 = 2816464358799024873LL;
unsigned int var_12 = 1151278770U;
unsigned int var_13 = 1666056664U;
unsigned int var_14 = 2649172348U;
int zero = 0;
short var_15 = (short)-24231;
int var_16 = 855553453;
unsigned short var_17 = (unsigned short)9604;
unsigned char var_18 = (unsigned char)185;
unsigned char var_19 = (unsigned char)188;
unsigned long long int var_20 = 2895387293517113201ULL;
unsigned char var_21 = (unsigned char)101;
unsigned short var_22 = (unsigned short)8397;
unsigned short var_23 = (unsigned short)44551;
unsigned char var_24 = (unsigned char)163;
unsigned short var_25 = (unsigned short)36304;
unsigned long long int var_26 = 9298148104019928275ULL;
unsigned int var_27 = 4170896198U;
int var_28 = -944881534;
unsigned short var_29 = (unsigned short)43880;
int var_30 = -325314366;
int var_31 = -1497507667;
int var_32 = -1772111918;
int var_33 = -424496661;
unsigned short var_34 = (unsigned short)61396;
unsigned short var_35 = (unsigned short)51148;
_Bool var_36 = (_Bool)0;
short var_37 = (short)7625;
signed char var_38 = (signed char)51;
unsigned long long int var_39 = 9851246632185887142ULL;
unsigned short arr_0 [14] ;
unsigned char arr_1 [14] ;
short arr_3 [15] [15] ;
unsigned char arr_5 [15] ;
unsigned char arr_6 [15] ;
_Bool arr_7 [15] [15] [15] ;
int arr_10 [15] [15] [15] [15] [15] [15] ;
int arr_11 [15] [15] [15] [15] [15] [15] ;
unsigned long long int arr_12 [15] ;
unsigned char arr_13 [15] [15] [15] [15] ;
int arr_16 [15] [15] [15] [15] ;
unsigned char arr_20 [15] [15] [15] ;
int arr_24 [23] [23] ;
signed char arr_25 [23] ;
unsigned long long int arr_28 [23] ;
unsigned short arr_30 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)50128;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)31086 : (short)18974;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)149 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)152 : (unsigned char)171;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1333818712;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -116130421 : 303226384;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = 6932113304007108554ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1765737569 : -1249070604;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = 978979085;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = (signed char)98;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 8778121321778470800ULL : 8230348124118706836ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)64819;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
