#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8107043359501793277ULL;
unsigned short var_2 = (unsigned short)36542;
unsigned long long int var_3 = 862055472103737643ULL;
unsigned long long int var_4 = 4039782001072376499ULL;
unsigned long long int var_5 = 2203569673238294308ULL;
unsigned short var_6 = (unsigned short)14463;
unsigned short var_7 = (unsigned short)40579;
unsigned short var_8 = (unsigned short)31598;
unsigned short var_11 = (unsigned short)18028;
unsigned long long int var_13 = 8981938621631854664ULL;
unsigned long long int var_15 = 17497650752387361654ULL;
unsigned short var_16 = (unsigned short)27854;
unsigned short var_17 = (unsigned short)31377;
unsigned long long int var_18 = 17346094209840903961ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)33207;
unsigned long long int var_20 = 14105287439564749848ULL;
unsigned short var_21 = (unsigned short)30511;
unsigned short var_22 = (unsigned short)30162;
unsigned long long int var_23 = 10882779716730280595ULL;
unsigned long long int var_24 = 14196430510940099901ULL;
unsigned short var_25 = (unsigned short)44196;
unsigned short var_26 = (unsigned short)12833;
unsigned short var_27 = (unsigned short)16517;
unsigned long long int var_28 = 13149271509827810815ULL;
unsigned long long int var_29 = 6690340891499479769ULL;
unsigned short var_30 = (unsigned short)12113;
unsigned short var_31 = (unsigned short)62703;
unsigned long long int var_32 = 6610359963613869474ULL;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_3 [16] [16] [16] ;
unsigned short arr_4 [16] [16] ;
unsigned short arr_9 [16] ;
unsigned short arr_13 [16] [16] ;
unsigned short arr_14 [16] ;
unsigned long long int arr_24 [22] ;
unsigned long long int arr_25 [22] ;
unsigned long long int arr_26 [22] ;
unsigned long long int arr_28 [22] [22] [22] ;
unsigned short arr_29 [22] [22] ;
unsigned short arr_30 [22] [22] ;
unsigned long long int arr_31 [22] [22] ;
unsigned short arr_33 [22] [22] ;
unsigned short arr_37 [22] [22] [22] ;
unsigned long long int arr_5 [16] [16] [16] ;
unsigned long long int arr_6 [16] [16] [16] ;
unsigned long long int arr_10 [16] ;
unsigned short arr_11 [16] [16] [16] ;
unsigned long long int arr_12 [16] ;
unsigned short arr_17 [16] [16] ;
unsigned short arr_21 [15] ;
unsigned short arr_22 [15] ;
unsigned short arr_23 [15] ;
unsigned short arr_27 [22] [22] ;
unsigned long long int arr_34 [22] [22] [22] ;
unsigned short arr_38 [22] [22] [22] ;
unsigned short arr_39 [22] [22] ;
unsigned long long int arr_40 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 10561268503864291758ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 12383515062324558851ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 919643915116765878ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)55763 : (unsigned short)37186;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)61336 : (unsigned short)26393;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (unsigned short)54774;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = (unsigned short)29709;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = 9584650336154690599ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = 9030099835346019274ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_26 [i_0] = 17480294067781868517ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 7588773288451872635ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)28796 : (unsigned short)28497;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned short)2713;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_31 [i_0] [i_1] = 17306284979705843090ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned short)55747;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (unsigned short)50695;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 8063309908823564446ULL : 1072673189904962748ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3898092586053316545ULL : 11375404995718598777ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 15777743900608061636ULL : 5318100072441092759ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)3707 : (unsigned short)42667;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 2142831021522396520ULL : 5796124988981536718ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)35065;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (unsigned short)42104;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = (unsigned short)30902;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (unsigned short)13342;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned short)54384;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = 1951183290952648779ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned short)31641;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_39 [i_0] [i_1] = (unsigned short)41584;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_40 [i_0] = 3739509899803160644ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_40 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
