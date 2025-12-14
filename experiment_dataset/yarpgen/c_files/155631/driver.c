#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_2 = (unsigned short)37390;
int var_4 = 1139001473;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
int var_9 = 713848202;
unsigned short var_10 = (unsigned short)13051;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int var_14 = 813471275;
int zero = 0;
unsigned short var_15 = (unsigned short)22230;
unsigned short var_16 = (unsigned short)36028;
int var_17 = 337492391;
int var_18 = -5153102;
int var_19 = 1109521453;
_Bool var_20 = (_Bool)0;
int var_21 = 686313077;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)1;
unsigned short var_25 = (unsigned short)1959;
_Bool var_26 = (_Bool)0;
int var_27 = 2090927420;
unsigned short var_28 = (unsigned short)6039;
int var_29 = -1995853234;
_Bool var_30 = (_Bool)0;
int var_31 = 1673184286;
int var_32 = -2000337919;
int var_33 = -396225284;
_Bool var_34 = (_Bool)0;
_Bool var_35 = (_Bool)1;
int var_36 = -1847092183;
_Bool var_37 = (_Bool)0;
unsigned short var_38 = (unsigned short)15012;
int var_39 = -1142398728;
_Bool var_40 = (_Bool)1;
unsigned short var_41 = (unsigned short)46830;
unsigned short var_42 = (unsigned short)29068;
_Bool var_43 = (_Bool)1;
_Bool var_44 = (_Bool)0;
_Bool var_45 = (_Bool)1;
_Bool var_46 = (_Bool)0;
int var_47 = 171259285;
_Bool var_48 = (_Bool)1;
_Bool var_49 = (_Bool)1;
unsigned short var_50 = (unsigned short)50464;
_Bool var_51 = (_Bool)1;
unsigned short var_52 = (unsigned short)28541;
unsigned short var_53 = (unsigned short)18950;
unsigned short var_54 = (unsigned short)52058;
unsigned short var_55 = (unsigned short)8349;
_Bool var_56 = (_Bool)1;
_Bool var_57 = (_Bool)0;
unsigned short arr_2 [21] [21] ;
_Bool arr_4 [21] [21] ;
_Bool arr_7 [21] [21] [21] [21] ;
unsigned short arr_8 [21] [21] [21] ;
_Bool arr_9 [21] [21] [21] ;
unsigned short arr_10 [21] [21] [21] ;
_Bool arr_11 [21] [21] ;
unsigned short arr_12 [21] [21] ;
unsigned short arr_13 [21] ;
_Bool arr_14 [21] [21] [21] ;
unsigned short arr_24 [21] [21] [21] ;
_Bool arr_25 [21] ;
_Bool arr_29 [23] [23] ;
int arr_36 [20] [20] ;
_Bool arr_38 [20] ;
int arr_43 [20] [20] [20] [20] ;
int arr_45 [16] ;
_Bool arr_47 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)26170;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)61189 : (unsigned short)28331;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)47644;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)56805 : (unsigned short)58550;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned short)26374;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)21926 : (unsigned short)61987;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_29 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_36 [i_0] [i_1] = 1357007142;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_38 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = -758001869;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_45 [i_0] = -131475956;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (_Bool)0;
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
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
