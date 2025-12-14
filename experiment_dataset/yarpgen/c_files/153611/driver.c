#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14278231425223352787ULL;
long long int var_1 = -3416832957950577971LL;
signed char var_3 = (signed char)-29;
unsigned long long int var_4 = 9763704394810997885ULL;
_Bool var_5 = (_Bool)1;
int var_6 = -947520188;
unsigned long long int var_8 = 201481978922960850ULL;
unsigned short var_9 = (unsigned short)58943;
unsigned char var_11 = (unsigned char)145;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-517;
unsigned int var_14 = 3959546440U;
unsigned long long int var_15 = 12814636159226911512ULL;
int zero = 0;
int var_17 = -2084159915;
long long int var_18 = 3870875771757500451LL;
unsigned short var_19 = (unsigned short)42185;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 3128792132881907041ULL;
signed char var_22 = (signed char)-48;
unsigned int var_23 = 3033836370U;
unsigned char var_24 = (unsigned char)58;
unsigned long long int var_25 = 8950532997644387932ULL;
int var_26 = 764702949;
unsigned long long int var_27 = 7776256433845674545ULL;
signed char var_28 = (signed char)-48;
short var_29 = (short)-31285;
unsigned char var_30 = (unsigned char)56;
signed char var_31 = (signed char)86;
unsigned int var_32 = 2065821505U;
unsigned short var_33 = (unsigned short)4435;
unsigned short var_34 = (unsigned short)28534;
signed char var_35 = (signed char)64;
long long int var_36 = 4126970301450782564LL;
signed char var_37 = (signed char)83;
signed char var_38 = (signed char)120;
unsigned short var_39 = (unsigned short)60739;
int var_40 = -873129208;
unsigned int var_41 = 100498256U;
long long int var_42 = 4914349915428379100LL;
_Bool arr_0 [22] ;
signed char arr_1 [22] ;
unsigned char arr_2 [22] ;
long long int arr_7 [22] [22] ;
unsigned int arr_8 [22] [22] ;
unsigned long long int arr_9 [22] [22] [22] [22] ;
long long int arr_10 [22] [22] [22] ;
long long int arr_13 [22] ;
unsigned long long int arr_16 [22] [22] [22] [22] [22] [22] ;
int arr_29 [22] [22] [22] [22] [22] ;
short arr_31 [22] [22] [22] [22] ;
unsigned int arr_33 [22] ;
unsigned char arr_40 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)255;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = 5001375036671090295LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 1526922984U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1680768120600976996ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -6509392968178724479LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = -4759705720681533222LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 11602958488876002350ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = -530999431;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)11174 : (short)-32092;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = 3043621716U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)25;
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
