#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
unsigned long long int var_2 = 7128696264358027292ULL;
short var_3 = (short)-14193;
unsigned short var_6 = (unsigned short)13023;
short var_10 = (short)-16927;
int var_11 = -1486590915;
unsigned int var_12 = 2309134105U;
signed char var_14 = (signed char)-92;
int var_15 = -116671831;
int zero = 0;
int var_16 = -1332179256;
unsigned int var_17 = 1959319801U;
unsigned char var_18 = (unsigned char)167;
unsigned char var_19 = (unsigned char)42;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8119003944424410031LL;
short var_22 = (short)31523;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)44993;
signed char var_25 = (signed char)-44;
unsigned int var_26 = 651385138U;
signed char var_27 = (signed char)47;
int var_28 = 1628648831;
unsigned int var_29 = 3765544472U;
long long int var_30 = -7222090794881800939LL;
int var_31 = -1909678125;
unsigned char var_32 = (unsigned char)153;
unsigned int var_33 = 2619445288U;
long long int var_34 = 8279643142662786311LL;
long long int var_35 = 262619764131145870LL;
int var_36 = 1625404684;
_Bool var_37 = (_Bool)1;
unsigned char var_38 = (unsigned char)157;
unsigned long long int var_39 = 15903347156076860674ULL;
short var_40 = (short)-10331;
signed char var_41 = (signed char)-50;
signed char var_42 = (signed char)-118;
unsigned int var_43 = 291919148U;
long long int arr_1 [18] ;
int arr_2 [18] ;
_Bool arr_4 [18] [18] [18] ;
unsigned char arr_5 [18] ;
unsigned long long int arr_6 [18] [18] ;
signed char arr_12 [16] [16] ;
unsigned long long int arr_18 [16] [16] [16] [16] ;
unsigned int arr_20 [16] [16] [16] ;
unsigned long long int arr_21 [17] ;
long long int arr_34 [18] ;
unsigned long long int arr_39 [25] [25] ;
short arr_40 [25] ;
unsigned int arr_41 [25] [25] [25] ;
long long int arr_44 [25] [25] ;
long long int arr_45 [25] [25] ;
int arr_46 [25] [25] ;
unsigned long long int arr_50 [22] ;
long long int arr_54 [22] [22] [22] [22] ;
int arr_10 [16] ;
int arr_11 [16] [16] ;
_Bool arr_29 [14] [14] ;
_Bool arr_30 [14] [14] [14] ;
long long int arr_33 [14] [14] [14] ;
signed char arr_38 [18] [18] ;
int arr_47 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -6965927967028885049LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -461893543;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = 9664608877066293386ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-25 : (signed char)15;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 9853765624436623164ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 189923940U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = 15827241931317432165ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_34 [i_0] = -7843479319790042954LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_39 [i_0] [i_1] = 11907060746601736676ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (short)10668 : (short)19834;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 861563316U : 2893533850U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_44 [i_0] [i_1] = (i_1 % 2 == 0) ? -6018593550562951288LL : 5678462689260503177LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_45 [i_0] [i_1] = 2595795591130898368LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_46 [i_0] [i_1] = -1090701334;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_50 [i_0] = 18228798709821737480ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_54 [i_0] [i_1] [i_2] [i_3] = 177104366286947862LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -657439178 : 1639483633;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? 184530443 : -1887724618;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_29 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = -6890506922947191035LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_38 [i_0] [i_1] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_47 [i_0] [i_1] = (i_0 % 2 == 0) ? 2098218966 : 1763389566;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
