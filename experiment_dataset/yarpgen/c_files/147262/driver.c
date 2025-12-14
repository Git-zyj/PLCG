#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)45627;
unsigned long long int var_2 = 14712183758802179757ULL;
long long int var_3 = 9158458660097661350LL;
signed char var_4 = (signed char)95;
unsigned short var_5 = (unsigned short)46666;
signed char var_6 = (signed char)82;
long long int var_7 = 6804374487097467296LL;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)111;
int var_10 = 44194421;
int var_11 = -1056364893;
int var_12 = 942353012;
unsigned char var_13 = (unsigned char)188;
int zero = 0;
unsigned long long int var_14 = 2200604565715238695ULL;
int var_15 = 1037049540;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)220;
short var_20 = (short)-19471;
signed char var_21 = (signed char)16;
int var_22 = 96319797;
int var_23 = 1234569710;
unsigned long long int var_24 = 7568004047877422104ULL;
_Bool var_25 = (_Bool)0;
long long int var_26 = 5410102450251818001LL;
signed char var_27 = (signed char)5;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)1;
_Bool var_30 = (_Bool)0;
long long int var_31 = 6718417382753316116LL;
_Bool var_32 = (_Bool)1;
long long int var_33 = 991681301695605649LL;
_Bool var_34 = (_Bool)1;
int var_35 = 583620;
_Bool var_36 = (_Bool)0;
_Bool var_37 = (_Bool)0;
_Bool var_38 = (_Bool)0;
short var_39 = (short)15983;
int var_40 = -2099876403;
_Bool var_41 = (_Bool)1;
_Bool var_42 = (_Bool)1;
_Bool var_43 = (_Bool)1;
int var_44 = 39219458;
_Bool var_45 = (_Bool)1;
long long int var_46 = -4400130466618657270LL;
unsigned long long int var_47 = 14196599377159904984ULL;
int var_48 = -1039992342;
int var_49 = 1901537223;
long long int var_50 = -1879762912557652993LL;
unsigned char var_51 = (unsigned char)182;
signed char var_52 = (signed char)-121;
int var_53 = -1398004469;
long long int var_54 = 5735748379240479118LL;
unsigned long long int var_55 = 6338193534074076271ULL;
unsigned long long int var_56 = 9117955788459538328ULL;
int var_57 = 1117450157;
long long int var_58 = -8636996513385879397LL;
long long int var_59 = -7195460679274728262LL;
_Bool var_60 = (_Bool)0;
long long int arr_1 [22] ;
int arr_2 [22] [22] [22] ;
_Bool arr_3 [22] [22] ;
unsigned char arr_4 [22] [22] ;
unsigned short arr_6 [22] [22] [22] ;
long long int arr_7 [22] [22] [22] [22] ;
_Bool arr_15 [22] [22] [22] [22] [22] [22] ;
unsigned long long int arr_19 [22] ;
long long int arr_21 [22] [22] [22] ;
_Bool arr_24 [22] [22] ;
_Bool arr_28 [22] [22] [22] [22] [22] [22] [22] ;
_Bool arr_34 [22] ;
signed char arr_39 [21] ;
_Bool arr_40 [21] ;
_Bool arr_43 [21] [21] ;
unsigned short arr_45 [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 6170090163922896346LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -477659074;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)160;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)18961 : (unsigned short)21565;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -7354896102081494692LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 11780509657487359711ULL : 4994927344582874279ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -3808187904378174664LL : -7387149832552188219LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_24 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_39 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_40 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_43 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = (unsigned short)15226;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
