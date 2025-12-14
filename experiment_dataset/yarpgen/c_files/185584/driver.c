#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27850;
unsigned char var_2 = (unsigned char)22;
unsigned char var_3 = (unsigned char)218;
short var_4 = (short)-11456;
unsigned int var_5 = 2113067218U;
unsigned long long int var_6 = 18389582543207033749ULL;
signed char var_7 = (signed char)28;
signed char var_8 = (signed char)-3;
signed char var_9 = (signed char)50;
short var_10 = (short)3519;
unsigned short var_13 = (unsigned short)48552;
unsigned char var_14 = (unsigned char)74;
unsigned long long int var_15 = 7225397524606907947ULL;
int zero = 0;
unsigned int var_16 = 1806834506U;
unsigned long long int var_17 = 8557571873672324570ULL;
unsigned char var_18 = (unsigned char)240;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 691864238732091783ULL;
unsigned char var_21 = (unsigned char)92;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)128;
signed char var_26 = (signed char)1;
short var_27 = (short)30509;
unsigned short var_28 = (unsigned short)32108;
unsigned char var_29 = (unsigned char)133;
unsigned char var_30 = (unsigned char)232;
unsigned int var_31 = 3840031596U;
int var_32 = -2096178181;
unsigned char var_33 = (unsigned char)40;
long long int var_34 = 2171114057483525448LL;
unsigned short var_35 = (unsigned short)4455;
unsigned long long int var_36 = 6882901712018372759ULL;
short arr_0 [22] ;
_Bool arr_1 [22] ;
_Bool arr_2 [22] [22] ;
long long int arr_3 [22] [22] ;
unsigned char arr_5 [22] [22] [22] ;
unsigned long long int arr_6 [22] [22] ;
unsigned char arr_7 [22] ;
int arr_14 [22] [22] [22] [22] [22] ;
signed char arr_23 [23] ;
int arr_24 [23] ;
signed char arr_27 [23] ;
_Bool arr_28 [23] [23] ;
unsigned short arr_29 [23] [23] [23] [23] ;
unsigned long long int arr_30 [23] [23] ;
unsigned int arr_34 [23] [23] [23] [23] [23] [23] [23] ;
int arr_17 [22] [22] [22] [22] ;
unsigned long long int arr_22 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (short)-21584;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = -1976752038322248584LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = 8155531073448798308ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 808365779 : 1063618936;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_23 [i_0] = (signed char)-60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = -999110845;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_28 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned short)4591;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_30 [i_0] [i_1] = 4373218172967957055ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 3892543142U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -124372828 : 259729661;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 15871626632171429805ULL : 458796853705514140ULL;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_17 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
