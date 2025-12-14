#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)228;
unsigned short var_1 = (unsigned short)237;
unsigned char var_2 = (unsigned char)99;
unsigned short var_3 = (unsigned short)31175;
_Bool var_4 = (_Bool)0;
int var_5 = 1532267890;
unsigned char var_6 = (unsigned char)93;
unsigned short var_7 = (unsigned short)64545;
int var_8 = -1555479806;
unsigned char var_9 = (unsigned char)46;
long long int var_10 = -2540355301273029683LL;
long long int var_11 = 4013895547860105607LL;
int zero = 0;
unsigned char var_12 = (unsigned char)214;
long long int var_13 = -7839679518813085450LL;
long long int var_14 = -5904038496402424031LL;
int var_15 = -926524049;
unsigned short var_16 = (unsigned short)42856;
int var_17 = -2071779195;
long long int var_18 = -8676951585183201543LL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 18290030398582286435ULL;
int var_21 = 1814582894;
signed char var_22 = (signed char)2;
int var_23 = -613203928;
signed char var_24 = (signed char)98;
signed char var_25 = (signed char)102;
int var_26 = 1755963889;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)23;
long long int var_29 = 2753064348321901252LL;
_Bool var_30 = (_Bool)0;
unsigned int var_31 = 2575421421U;
unsigned long long int var_32 = 14596513796037631659ULL;
int var_33 = 1723942100;
unsigned long long int var_34 = 4652900655727478309ULL;
unsigned short var_35 = (unsigned short)45631;
unsigned short var_36 = (unsigned short)9700;
long long int var_37 = -3931479186907903839LL;
int var_38 = 2128484785;
short var_39 = (short)-2921;
short var_40 = (short)22884;
unsigned long long int var_41 = 11475194232321008580ULL;
long long int var_42 = 44972036645867240LL;
unsigned char var_43 = (unsigned char)30;
_Bool var_44 = (_Bool)0;
signed char var_45 = (signed char)58;
long long int var_46 = 3753481031540529854LL;
unsigned short var_47 = (unsigned short)30615;
unsigned short var_48 = (unsigned short)57029;
unsigned int var_49 = 141317253U;
unsigned short var_50 = (unsigned short)9685;
long long int var_51 = -6532983875392516382LL;
signed char var_52 = (signed char)-104;
int var_53 = -781099282;
long long int var_54 = -1404576855259599569LL;
short var_55 = (short)12896;
int var_56 = -1116368125;
int var_57 = -1021988528;
long long int var_58 = 45042056955845279LL;
unsigned long long int var_59 = 5264114916887174716ULL;
short var_60 = (short)-4954;
unsigned short var_61 = (unsigned short)56240;
signed char var_62 = (signed char)-108;
long long int var_63 = -5598030560858190096LL;
unsigned short arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
long long int arr_3 [21] ;
unsigned short arr_4 [21] [21] [21] ;
unsigned short arr_5 [21] [21] [21] [21] ;
unsigned int arr_6 [21] ;
long long int arr_7 [21] [21] [21] [21] ;
unsigned long long int arr_8 [21] [21] [21] [21] ;
int arr_9 [15] [15] ;
unsigned short arr_10 [15] ;
unsigned char arr_26 [19] ;
signed char arr_27 [19] ;
int arr_28 [19] [19] ;
_Bool arr_29 [19] ;
unsigned short arr_30 [19] ;
int arr_31 [19] [19] ;
unsigned short arr_33 [19] ;
_Bool arr_34 [19] [19] [19] ;
signed char arr_35 [19] [19] ;
int arr_38 [19] [19] ;
_Bool arr_44 [19] [19] [19] [19] ;
unsigned char arr_47 [19] [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)35449 : (unsigned short)6130;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4433594121024713460ULL : 3693160661756965251ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 7844840580016804245LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)30751;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (unsigned short)23978;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 3326127820U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -3206814252821551746LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 13586250451612260500ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = -1360617028;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (unsigned short)47551;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = (signed char)-66;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = 1333943617;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_29 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = (unsigned short)49836;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = 337079189;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39358 : (unsigned short)58714;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_35 [i_0] [i_1] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_38 [i_0] [i_1] = 1593933975;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)162;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
