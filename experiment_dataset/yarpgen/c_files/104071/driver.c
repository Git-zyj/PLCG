#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)0;
short var_7 = (short)-8830;
unsigned short var_8 = (unsigned short)25563;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 12797036799430273022ULL;
int zero = 0;
short var_20 = (short)4941;
unsigned char var_21 = (unsigned char)147;
signed char var_22 = (signed char)-67;
unsigned short var_23 = (unsigned short)49166;
unsigned short var_24 = (unsigned short)47517;
unsigned char var_25 = (unsigned char)186;
unsigned char var_26 = (unsigned char)204;
unsigned char var_27 = (unsigned char)252;
unsigned char var_28 = (unsigned char)114;
unsigned long long int var_29 = 17789389093154446770ULL;
_Bool var_30 = (_Bool)0;
unsigned char var_31 = (unsigned char)24;
unsigned char var_32 = (unsigned char)0;
unsigned char var_33 = (unsigned char)6;
int var_34 = 1263057727;
unsigned long long int var_35 = 12127614325552051262ULL;
_Bool var_36 = (_Bool)1;
unsigned char var_37 = (unsigned char)112;
unsigned char var_38 = (unsigned char)84;
unsigned char var_39 = (unsigned char)68;
short var_40 = (short)-11292;
unsigned char var_41 = (unsigned char)30;
unsigned short var_42 = (unsigned short)15010;
unsigned long long int var_43 = 17497075457678509060ULL;
unsigned char var_44 = (unsigned char)6;
unsigned char var_45 = (unsigned char)191;
unsigned short var_46 = (unsigned short)21014;
unsigned short var_47 = (unsigned short)21430;
int var_48 = 1431657383;
unsigned long long int var_49 = 2661919164418279157ULL;
unsigned char var_50 = (unsigned char)183;
unsigned long long int var_51 = 9514988019819316756ULL;
int var_52 = 241250734;
unsigned char var_53 = (unsigned char)60;
unsigned char arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_11 [13] ;
unsigned short arr_12 [13] ;
unsigned char arr_14 [11] ;
unsigned short arr_16 [15] ;
signed char arr_17 [15] [15] ;
unsigned long long int arr_18 [15] [15] ;
short arr_20 [15] ;
unsigned long long int arr_22 [15] [15] [15] ;
_Bool arr_27 [25] [25] ;
_Bool arr_28 [25] ;
unsigned long long int arr_31 [25] [25] ;
int arr_32 [25] [25] [25] ;
unsigned long long int arr_33 [25] [25] [25] ;
unsigned char arr_35 [25] [25] [25] ;
int arr_47 [25] [25] [25] [25] [25] ;
unsigned char arr_23 [15] [15] [15] ;
int arr_24 [15] ;
unsigned long long int arr_25 [15] [15] ;
_Bool arr_26 [15] ;
unsigned short arr_53 [25] [25] ;
unsigned char arr_67 [25] ;
_Bool arr_68 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3433679065749640759ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 12765176907850528792ULL : 15735363714309522436ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4999 : (unsigned short)42441;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_14 [i_0] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (unsigned short)10439;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)82;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_18 [i_0] [i_1] = 768162711073600552ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = (short)-28480;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 16486098543216257336ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_27 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? 13091881848248074262ULL : 15689760886560354106ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 82284096 : 509415523;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 10209111581875612723ULL : 7746597223509186156ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)138 : (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = 1872533893;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = 1506152120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = 16918928374492377501ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_53 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)40842 : (unsigned short)37663;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_67 [i_0] = (i_0 % 2 == 0) ? (unsigned char)179 : (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_68 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_53 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_67 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_68 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
