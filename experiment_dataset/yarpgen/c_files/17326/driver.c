#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)40;
unsigned short var_3 = (unsigned short)37935;
unsigned char var_4 = (unsigned char)109;
long long int var_5 = 5936652192893911429LL;
unsigned long long int var_6 = 6256279855824078455ULL;
int var_8 = -214687576;
short var_9 = (short)7246;
long long int var_10 = 8726841290522034621LL;
short var_11 = (short)825;
short var_12 = (short)-19008;
int var_13 = 168539206;
unsigned long long int var_14 = 9690674303431591081ULL;
short var_15 = (short)-24362;
signed char var_16 = (signed char)-97;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)62349;
unsigned short var_19 = (unsigned short)61921;
int zero = 0;
int var_20 = -557547501;
unsigned long long int var_21 = 3593125430215786596ULL;
_Bool var_22 = (_Bool)1;
long long int var_23 = -932761726642820114LL;
unsigned char var_24 = (unsigned char)67;
_Bool var_25 = (_Bool)1;
short var_26 = (short)-7443;
int var_27 = -1171646749;
unsigned long long int var_28 = 9752632400637967428ULL;
long long int var_29 = -7050012342953233031LL;
long long int var_30 = 1747005420980397235LL;
signed char var_31 = (signed char)90;
long long int var_32 = 8531379894094594864LL;
unsigned short var_33 = (unsigned short)18584;
short var_34 = (short)9793;
int var_35 = 735306165;
int var_36 = -144645699;
short var_37 = (short)18714;
_Bool var_38 = (_Bool)1;
int var_39 = -57292930;
_Bool var_40 = (_Bool)0;
unsigned short var_41 = (unsigned short)5088;
unsigned char var_42 = (unsigned char)254;
signed char var_43 = (signed char)38;
long long int var_44 = 3851070352478040574LL;
unsigned short var_45 = (unsigned short)2879;
unsigned long long int var_46 = 13088700828303056666ULL;
signed char var_47 = (signed char)31;
short var_48 = (short)20540;
unsigned short var_49 = (unsigned short)8475;
unsigned short var_50 = (unsigned short)44638;
unsigned short var_51 = (unsigned short)25888;
_Bool var_52 = (_Bool)0;
short var_53 = (short)-11325;
unsigned short arr_0 [11] ;
unsigned short arr_1 [11] ;
unsigned short arr_2 [11] ;
signed char arr_4 [11] [11] ;
signed char arr_6 [11] [11] [11] ;
unsigned long long int arr_10 [11] [11] ;
unsigned long long int arr_12 [11] [11] [11] [11] ;
long long int arr_13 [11] [11] [11] [11] [11] ;
_Bool arr_14 [11] [11] ;
unsigned short arr_16 [11] [11] [11] [11] [11] [11] [11] ;
short arr_18 [11] [11] [11] [11] [11] ;
int arr_32 [11] [11] [11] [11] [11] [11] [11] ;
int arr_36 [22] ;
unsigned long long int arr_37 [22] ;
short arr_39 [15] ;
short arr_42 [15] ;
int arr_44 [15] ;
int arr_45 [15] ;
unsigned short arr_46 [15] [15] [15] ;
unsigned short arr_49 [15] ;
signed char arr_50 [15] [15] [15] ;
unsigned long long int arr_29 [11] [11] [11] [11] [11] [11] ;
short arr_38 [22] [22] ;
signed char arr_47 [15] [15] [15] ;
signed char arr_48 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)13346 : (unsigned short)64651;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned short)12103;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)20654;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 7078246111149528814ULL : 4984165439128762800ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 6309506541309179807ULL : 15672050540857248170ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -403906082053104543LL : -8384735479179212210LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_1 % 2 == 0) ? (unsigned short)43364 : (unsigned short)27239;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)24465;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 11; ++i_6) 
                                arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -1383315716;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_36 [i_0] = 861219495;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_37 [i_0] = 17027576640743363098ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_39 [i_0] = (short)21317;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? (short)-8337 : (short)19593;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_44 [i_0] = 2042050214;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_45 [i_0] = -1663286730;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned short)14179;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_49 [i_0] = (unsigned short)2868;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 16684136884354626169ULL : 11675042910350376698ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_38 [i_0] [i_1] = (short)31462;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)85 : (signed char)-92;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? (signed char)-34 : (signed char)-54;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_48 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
