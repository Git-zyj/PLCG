#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14978;
short var_1 = (short)2050;
int var_3 = 640647654;
unsigned char var_4 = (unsigned char)8;
signed char var_5 = (signed char)47;
short var_6 = (short)30878;
unsigned long long int var_7 = 5283516496903147863ULL;
signed char var_8 = (signed char)124;
signed char var_9 = (signed char)8;
int var_10 = 73175514;
int var_11 = -541926917;
unsigned char var_12 = (unsigned char)55;
unsigned char var_13 = (unsigned char)93;
short var_14 = (short)21191;
int var_15 = 1031694235;
int var_16 = -1092526181;
short var_17 = (short)-28391;
unsigned long long int var_18 = 3079134750856636074ULL;
short var_19 = (short)-10879;
int zero = 0;
short var_20 = (short)22790;
unsigned char var_21 = (unsigned char)140;
unsigned char var_22 = (unsigned char)12;
unsigned char var_23 = (unsigned char)206;
unsigned long long int var_24 = 3788569685577926598ULL;
int var_25 = -1232205767;
unsigned char var_26 = (unsigned char)17;
short var_27 = (short)-12517;
short var_28 = (short)-30155;
signed char var_29 = (signed char)-101;
int var_30 = 197478275;
unsigned long long int var_31 = 13639155967564195557ULL;
unsigned char var_32 = (unsigned char)179;
unsigned long long int var_33 = 2689703598223552838ULL;
int var_34 = 2074274326;
unsigned char var_35 = (unsigned char)140;
signed char var_36 = (signed char)89;
short var_37 = (short)12934;
int var_38 = 464844206;
short var_39 = (short)28568;
unsigned long long int var_40 = 9568547454346852949ULL;
signed char var_41 = (signed char)-123;
signed char var_42 = (signed char)116;
int var_43 = 596624415;
signed char var_44 = (signed char)122;
signed char var_45 = (signed char)-78;
signed char var_46 = (signed char)-104;
short var_47 = (short)-13928;
int var_48 = -1118206171;
signed char arr_1 [15] ;
unsigned long long int arr_3 [15] [15] [15] ;
short arr_4 [15] [15] [15] ;
signed char arr_5 [15] [15] [15] ;
short arr_6 [15] [15] [15] [15] ;
int arr_8 [15] [15] [15] [15] ;
unsigned long long int arr_10 [15] [15] [15] ;
unsigned char arr_13 [15] [15] [15] [15] [15] [15] [15] ;
int arr_14 [15] [15] [15] [15] [15] ;
int arr_15 [15] [15] [15] [15] ;
unsigned char arr_16 [15] ;
unsigned char arr_18 [15] [15] [15] [15] [15] ;
short arr_19 [15] [15] [15] [15] [15] ;
signed char arr_24 [15] [15] [15] [15] [15] ;
signed char arr_26 [15] [15] ;
unsigned long long int arr_27 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)75;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4168940554501915784ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)24314;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-24689;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 921070680;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 1972852549380014572ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 694313650;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 1042998691;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)23549;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_26 [i_0] [i_1] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = 2609237713543628925ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
