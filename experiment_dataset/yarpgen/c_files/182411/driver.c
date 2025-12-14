#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)100;
long long int var_2 = -1366118088904979488LL;
long long int var_3 = -3766909511652050782LL;
unsigned long long int var_4 = 16831200751198947166ULL;
unsigned char var_5 = (unsigned char)197;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-848;
unsigned short var_8 = (unsigned short)54620;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-43;
long long int var_12 = 4512243338544666618LL;
int zero = 0;
unsigned char var_15 = (unsigned char)27;
unsigned int var_16 = 3497371800U;
long long int var_17 = -3583499361144640094LL;
int var_18 = 1140783075;
int var_19 = -287555648;
long long int var_20 = 9133332703446745690LL;
int var_21 = -1820696631;
signed char var_22 = (signed char)-59;
signed char var_23 = (signed char)99;
unsigned long long int var_24 = 2591347866284704566ULL;
unsigned short var_25 = (unsigned short)5247;
unsigned char var_26 = (unsigned char)49;
unsigned short var_27 = (unsigned short)275;
unsigned short var_28 = (unsigned short)39092;
int var_29 = -759047165;
short var_30 = (short)26991;
unsigned int var_31 = 4175626632U;
unsigned long long int arr_3 [23] ;
unsigned int arr_5 [23] ;
unsigned short arr_6 [23] [23] [23] ;
unsigned short arr_7 [23] [23] ;
unsigned short arr_22 [13] [13] [13] [13] [13] [13] [13] ;
unsigned short arr_23 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 17856435528611943931ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 2214249516U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)6808;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)58008;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 13; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)29157;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)27113 : (unsigned short)64009;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
