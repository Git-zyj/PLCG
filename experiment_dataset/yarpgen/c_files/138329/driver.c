#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 436985500U;
unsigned char var_1 = (unsigned char)28;
unsigned long long int var_2 = 1982147643901803997ULL;
unsigned long long int var_3 = 12120902090567395884ULL;
short var_4 = (short)-748;
unsigned long long int var_5 = 10490354234047629708ULL;
long long int var_6 = 8221463117120651959LL;
long long int var_7 = 2375368251542107358LL;
signed char var_8 = (signed char)89;
short var_10 = (short)-9157;
long long int var_12 = 8534156531816483309LL;
unsigned char var_14 = (unsigned char)97;
unsigned long long int var_17 = 17576128093937559046ULL;
unsigned short var_18 = (unsigned short)52764;
int zero = 0;
short var_20 = (short)19558;
short var_21 = (short)11578;
long long int var_22 = 8681867221070354933LL;
unsigned long long int var_23 = 4718558814372744910ULL;
unsigned long long int var_24 = 6250569374230021203ULL;
long long int var_25 = 6716708469670863700LL;
unsigned long long int var_26 = 2461026437945462515ULL;
unsigned char var_27 = (unsigned char)19;
long long int var_28 = 7786297627089875244LL;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)230;
unsigned long long int var_31 = 14814432450000473208ULL;
_Bool var_32 = (_Bool)0;
unsigned short arr_0 [23] [23] ;
signed char arr_1 [23] ;
unsigned long long int arr_2 [23] [23] [23] ;
long long int arr_3 [23] [23] ;
unsigned int arr_5 [23] [23] [23] ;
unsigned char arr_7 [23] ;
long long int arr_10 [23] [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_16 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)12904;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)29;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 13986876340894155359ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 4280052637522739727LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2930562174U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1013274731589303651LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_16 [i_0] = 11920098453961567606ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
