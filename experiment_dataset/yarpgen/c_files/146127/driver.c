#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)113;
signed char var_1 = (signed char)114;
unsigned int var_2 = 1695675814U;
signed char var_3 = (signed char)122;
unsigned int var_8 = 1102035534U;
unsigned int var_9 = 2367281430U;
unsigned int var_11 = 318989181U;
signed char var_12 = (signed char)-41;
signed char var_13 = (signed char)-57;
int zero = 0;
unsigned int var_14 = 2785205575U;
signed char var_15 = (signed char)90;
signed char var_16 = (signed char)29;
unsigned int var_17 = 32257329U;
unsigned int var_18 = 1749842150U;
signed char var_19 = (signed char)10;
unsigned int var_20 = 1778344060U;
signed char var_21 = (signed char)-103;
unsigned int var_22 = 631985403U;
unsigned int var_23 = 564121713U;
signed char var_24 = (signed char)-24;
unsigned int var_25 = 2081907805U;
signed char var_26 = (signed char)-30;
unsigned int arr_0 [22] [22] ;
signed char arr_2 [22] [22] ;
signed char arr_3 [22] [22] ;
unsigned int arr_4 [22] [22] [22] ;
signed char arr_5 [22] [22] [22] [22] ;
signed char arr_7 [22] [22] [22] [22] ;
signed char arr_10 [22] [22] ;
signed char arr_11 [22] [22] ;
unsigned int arr_12 [22] [22] [22] ;
signed char arr_19 [22] [22] [22] ;
unsigned int arr_20 [22] [22] ;
unsigned int arr_21 [22] [22] [22] [22] ;
unsigned int arr_25 [22] [22] [22] [22] ;
signed char arr_33 [22] ;
signed char arr_43 [23] ;
signed char arr_45 [23] ;
signed char arr_9 [22] [22] [22] ;
signed char arr_14 [22] [22] ;
unsigned int arr_15 [22] [22] ;
signed char arr_22 [22] [22] [22] ;
unsigned int arr_23 [22] [22] [22] ;
signed char arr_27 [22] [22] [22] ;
unsigned int arr_28 [22] [22] [22] ;
signed char arr_29 [22] [22] [22] [22] ;
signed char arr_34 [22] ;
signed char arr_35 [22] [22] [22] [22] ;
signed char arr_40 [22] ;
unsigned int arr_41 [22] [22] [22] ;
unsigned int arr_47 [23] ;
signed char arr_48 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 808115256U : 3828098846U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)15 : (signed char)-69;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-12 : (signed char)-100;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 114718951U : 1044913851U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-59 : (signed char)98;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)66 : (signed char)-43;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)29 : (signed char)-68;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-8 : (signed char)86;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2418676567U : 4197981557U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)8 : (signed char)-107;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? 730509331U : 417014658U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3433278818U : 2793512646U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 3649855487U : 3707175122U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (signed char)100 : (signed char)-17;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? (signed char)87 : (signed char)-20;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (signed char)30 : (signed char)70;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-83 : (signed char)-20;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-53 : (signed char)-50;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 237302274U : 481967474U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)3 : (signed char)-82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2827929971U : 56390142U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-7 : (signed char)100;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3435373763U : 2160246357U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)25 : (signed char)-60;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (signed char)34 : (signed char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)33 : (signed char)34;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (signed char)-84 : (signed char)104;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2219881413U : 3073897899U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? 969233572U : 1100192166U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-48 : (signed char)-60;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_22 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
