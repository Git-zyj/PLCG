#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1428190923;
long long int var_3 = 1915108615346984409LL;
unsigned char var_5 = (unsigned char)109;
long long int var_10 = 8386228313589530646LL;
long long int var_11 = 5784034992170484694LL;
short var_13 = (short)-14847;
int zero = 0;
unsigned int var_15 = 4188049699U;
unsigned char var_16 = (unsigned char)218;
long long int var_17 = 9096684144274362146LL;
long long int var_18 = -8833153876591762391LL;
unsigned int var_19 = 2690182995U;
long long int var_20 = 5426436692146291626LL;
unsigned long long int var_21 = 9959831760260805993ULL;
unsigned int var_22 = 3623095722U;
unsigned short var_23 = (unsigned short)30792;
short var_24 = (short)-16355;
long long int var_25 = 2750177103564303314LL;
unsigned int var_26 = 2384067935U;
unsigned long long int var_27 = 5649700066535930098ULL;
signed char var_28 = (signed char)82;
short var_29 = (short)-22134;
int var_30 = 998785083;
unsigned int var_31 = 923341059U;
unsigned char var_32 = (unsigned char)11;
int var_33 = 2134750430;
unsigned char var_34 = (unsigned char)77;
signed char var_35 = (signed char)11;
long long int var_36 = 4468481380267700606LL;
unsigned long long int var_37 = 16114001742478681857ULL;
unsigned long long int var_38 = 5790664619425000144ULL;
short var_39 = (short)21037;
unsigned char var_40 = (unsigned char)223;
unsigned int var_41 = 3559484227U;
unsigned int var_42 = 2784744720U;
int var_43 = 395059803;
unsigned int arr_0 [15] [15] ;
unsigned char arr_1 [15] ;
unsigned char arr_3 [15] ;
unsigned char arr_6 [15] [15] ;
long long int arr_7 [15] [15] ;
unsigned long long int arr_8 [15] [15] [15] ;
long long int arr_10 [15] ;
long long int arr_13 [15] [15] ;
unsigned char arr_14 [15] [15] [15] ;
int arr_15 [15] [15] [15] [15] [15] [15] ;
unsigned char arr_21 [15] [15] [15] [15] [15] ;
unsigned short arr_25 [15] [15] [15] ;
unsigned char arr_27 [15] [15] [15] [15] [15] ;
short arr_34 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 2175932523U : 19545459U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 4371127694781406868LL : 2773855969462231367LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 13670270126732693742ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = -2168325113369791170LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 7843661796158613612LL : -2616756178628794549LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? -1780883322 : -46740742;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)8148 : (unsigned short)16284;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)18;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-1659;
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
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
