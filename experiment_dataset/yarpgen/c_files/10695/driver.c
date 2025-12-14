#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)34714;
signed char var_1 = (signed char)-73;
int var_2 = 170202377;
unsigned short var_3 = (unsigned short)5027;
short var_4 = (short)13666;
signed char var_5 = (signed char)52;
short var_6 = (short)29428;
int var_7 = 1866783015;
signed char var_8 = (signed char)-2;
signed char var_9 = (signed char)54;
_Bool var_10 = (_Bool)1;
long long int var_11 = -5758472231098507245LL;
signed char var_12 = (signed char)-9;
signed char var_13 = (signed char)-113;
unsigned long long int var_14 = 14498089414519940531ULL;
int var_15 = -265875438;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_18 = (short)-4331;
unsigned char var_19 = (unsigned char)147;
long long int var_20 = 8789284870603395550LL;
long long int var_21 = 2916198824720699652LL;
long long int var_22 = -3090283708655333538LL;
long long int var_23 = -4475977529399725199LL;
short var_24 = (short)-13787;
short var_25 = (short)19385;
short var_26 = (short)29082;
_Bool var_27 = (_Bool)0;
_Bool var_28 = (_Bool)0;
int var_29 = 1424254528;
unsigned char var_30 = (unsigned char)73;
long long int var_31 = 3992237843088267348LL;
_Bool var_32 = (_Bool)0;
unsigned short var_33 = (unsigned short)47619;
long long int arr_0 [17] ;
signed char arr_1 [17] [17] ;
unsigned short arr_2 [17] ;
unsigned char arr_3 [10] ;
_Bool arr_4 [10] ;
short arr_5 [10] [10] [10] ;
long long int arr_6 [10] ;
int arr_7 [10] [10] ;
long long int arr_8 [10] [10] [10] [10] ;
unsigned int arr_9 [10] [10] [10] [10] ;
long long int arr_10 [10] [10] [10] [10] ;
long long int arr_11 [10] [10] [10] [10] [10] [10] ;
long long int arr_15 [10] ;
long long int arr_18 [10] [10] [10] ;
short arr_19 [10] [10] [10] [10] [10] [10] ;
short arr_20 [25] [25] ;
int arr_21 [25] ;
int arr_22 [13] ;
unsigned short arr_23 [13] ;
short arr_24 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -2334480325281554859LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)7655 : (unsigned short)60598;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)31718;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 2251548903266715224LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 1442645337;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = -1785742604047369381LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 2883961362U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 2606403653293830165LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -8457191453818267793LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = -2228177451051619862LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = -5226855454147819686LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)10362;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-7383;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_21 [i_0] = -1752971566;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = -1080749234;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (unsigned short)54910;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_24 [i_0] [i_1] = (short)1641;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
