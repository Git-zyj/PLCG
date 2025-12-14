#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25808;
short var_1 = (short)-16897;
short var_3 = (short)-20971;
short var_8 = (short)-5497;
short var_10 = (short)6802;
short var_11 = (short)-332;
short var_12 = (short)-22350;
short var_14 = (short)28064;
short var_15 = (short)32268;
short var_16 = (short)5372;
short var_17 = (short)20573;
short var_19 = (short)31910;
int zero = 0;
short var_20 = (short)26053;
short var_21 = (short)-21446;
short var_22 = (short)-12211;
short var_23 = (short)18496;
short var_24 = (short)-1817;
short var_25 = (short)3583;
short var_26 = (short)-11769;
short var_27 = (short)-14016;
short var_28 = (short)3095;
short arr_0 [17] [17] ;
short arr_1 [17] [17] ;
short arr_2 [17] [17] ;
short arr_3 [17] ;
short arr_4 [17] ;
short arr_8 [17] [17] ;
short arr_12 [17] [17] [17] ;
short arr_13 [17] ;
short arr_14 [17] [17] [17] ;
short arr_6 [17] [17] ;
short arr_10 [17] ;
short arr_15 [17] ;
short arr_18 [17] [17] [17] [17] ;
short arr_19 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-31738;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-20176 : (short)-32385;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-25341;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)-26951;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)2111 : (short)25020;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-15408;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)21884;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (short)27493;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (short)-7149;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)17684 : (short)233;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (short)-3078;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (short)-23603;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (short)16096;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = (short)20256;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
