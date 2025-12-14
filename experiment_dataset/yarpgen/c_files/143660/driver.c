#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16344179457027888409ULL;
unsigned short var_1 = (unsigned short)5600;
short var_2 = (short)2066;
signed char var_3 = (signed char)-53;
long long int var_4 = 5482366656013255982LL;
short var_5 = (short)-14602;
long long int var_6 = 4671731940076285910LL;
_Bool var_8 = (_Bool)1;
int var_10 = -2038474185;
unsigned int var_12 = 3709637489U;
signed char var_13 = (signed char)25;
long long int var_16 = -4457524006466595652LL;
int zero = 0;
long long int var_17 = 4356705875592357926LL;
unsigned long long int var_18 = 18280225154689601215ULL;
unsigned char var_19 = (unsigned char)120;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)44;
unsigned long long int var_22 = 15914943554392689061ULL;
signed char var_23 = (signed char)113;
unsigned long long int var_24 = 17709148179969081259ULL;
int var_25 = 242656746;
signed char var_26 = (signed char)-38;
unsigned short var_27 = (unsigned short)65166;
unsigned short var_28 = (unsigned short)40799;
unsigned char var_29 = (unsigned char)197;
unsigned int var_30 = 3408525383U;
int var_31 = 314868779;
int var_32 = -1508031284;
long long int var_33 = -8050447440398609618LL;
long long int var_34 = -3761202140645135427LL;
short var_35 = (short)-19058;
signed char var_36 = (signed char)74;
signed char var_37 = (signed char)68;
signed char var_38 = (signed char)9;
unsigned int var_39 = 1003729680U;
unsigned long long int var_40 = 12437100530760192307ULL;
short var_41 = (short)28930;
long long int var_42 = -7232953145142751908LL;
unsigned long long int var_43 = 253664607259121325ULL;
int var_44 = 2050888365;
short var_45 = (short)-6812;
int var_46 = -1491772871;
unsigned short var_47 = (unsigned short)10528;
unsigned char var_48 = (unsigned char)6;
unsigned long long int var_49 = 6785276229479526889ULL;
long long int var_50 = -893221079246470789LL;
unsigned long long int var_51 = 10081632573641651158ULL;
unsigned int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned short arr_2 [19] ;
unsigned short arr_5 [19] [19] ;
short arr_12 [20] ;
long long int arr_15 [19] ;
unsigned long long int arr_18 [19] [19] [19] [19] ;
unsigned long long int arr_23 [19] [19] [19] [19] [19] ;
_Bool arr_25 [19] [19] [19] [19] [19] [19] ;
int arr_26 [19] [19] [19] ;
short arr_28 [19] ;
unsigned long long int arr_29 [19] ;
unsigned short arr_36 [10] [10] ;
long long int arr_41 [10] [10] [10] ;
int arr_45 [10] [10] [10] [10] [10] ;
int arr_49 [10] [10] [10] [10] [10] ;
_Bool arr_6 [19] [19] [19] ;
signed char arr_27 [19] ;
signed char arr_30 [19] [19] [19] ;
unsigned char arr_35 [18] ;
long long int arr_53 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2523671557U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 328656844133384758ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)22775;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)8800;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (short)-14723;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_15 [i_0] = -947151480575556888LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 16850556898582823996ULL : 7355258533829600776ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = 314533763329584114ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 29625524 : -1804172098;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_28 [i_0] = (short)-2148;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = 9075300258699625303ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned short)7751;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = -3949101832215104102LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = 1263754038;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = 1220860234;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_35 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -1725058245119100056LL : -5331332885038628650LL;
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
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_53 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
