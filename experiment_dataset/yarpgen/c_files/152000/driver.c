#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3406819556U;
int var_1 = 15361699;
short var_2 = (short)-9623;
short var_3 = (short)-27417;
short var_5 = (short)-26228;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-23093;
short var_8 = (short)27907;
signed char var_9 = (signed char)-23;
int var_10 = 7824795;
unsigned int var_12 = 1171827210U;
short var_14 = (short)-22517;
short var_15 = (short)-26833;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-25565;
short var_18 = (short)15911;
unsigned int var_19 = 1743124321U;
unsigned int var_20 = 522138183U;
short var_21 = (short)-17957;
short var_22 = (short)-16687;
int var_23 = 1807359272;
short var_24 = (short)-1635;
signed char var_25 = (signed char)43;
unsigned int var_26 = 3014343564U;
unsigned int var_27 = 439670385U;
signed char var_28 = (signed char)-20;
short var_29 = (short)-32101;
unsigned int var_30 = 1989580027U;
signed char var_31 = (signed char)-113;
short var_32 = (short)32281;
signed char var_33 = (signed char)96;
int var_34 = 757458812;
short var_35 = (short)26416;
short var_36 = (short)-13901;
_Bool var_37 = (_Bool)1;
short var_38 = (short)19385;
unsigned int arr_1 [15] ;
short arr_3 [15] ;
_Bool arr_6 [15] [15] ;
short arr_7 [15] ;
short arr_9 [15] [15] [15] [15] ;
short arr_11 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_13 [15] [15] [15] [15] ;
int arr_14 [15] [15] [15] [15] [15] ;
int arr_25 [23] ;
short arr_31 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1473873247U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)18526;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (short)-26039;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-7624 : (short)24743;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)9707;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1244520407U : 1761845958U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = -1325951890;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_25 [i_0] = 1280232503;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (short)16189;
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
    hash(&seed, var_37);
    hash(&seed, var_38);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
