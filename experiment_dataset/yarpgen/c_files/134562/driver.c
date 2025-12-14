#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1090725542518067693ULL;
int var_1 = -2088330655;
short var_2 = (short)5925;
unsigned char var_3 = (unsigned char)53;
signed char var_6 = (signed char)49;
unsigned char var_7 = (unsigned char)163;
short var_8 = (short)-18498;
long long int var_9 = -7250358281258354985LL;
int var_10 = 559072737;
unsigned char var_11 = (unsigned char)96;
short var_12 = (short)-1492;
int var_13 = 641913879;
unsigned long long int var_14 = 10444854923081817135ULL;
int zero = 0;
int var_15 = 1034418195;
int var_16 = -1804444329;
int var_17 = -1270183902;
short var_18 = (short)-7323;
short var_19 = (short)27090;
short var_20 = (short)-10972;
short var_21 = (short)10865;
int var_22 = 1994692266;
unsigned char var_23 = (unsigned char)232;
long long int var_24 = -9157185995791060970LL;
signed char var_25 = (signed char)-57;
short var_26 = (short)-1515;
short var_27 = (short)18765;
unsigned short var_28 = (unsigned short)22473;
short var_29 = (short)969;
unsigned short var_30 = (unsigned short)50175;
_Bool var_31 = (_Bool)1;
signed char var_32 = (signed char)79;
short var_33 = (short)24922;
signed char var_34 = (signed char)-71;
int var_35 = -367784160;
short var_36 = (short)-6926;
unsigned char var_37 = (unsigned char)249;
short var_38 = (short)-7214;
long long int arr_2 [10] ;
long long int arr_3 [10] ;
signed char arr_5 [10] [10] [10] [10] ;
signed char arr_7 [10] [10] [10] [10] ;
long long int arr_13 [20] ;
signed char arr_14 [20] [20] ;
unsigned long long int arr_16 [20] [20] ;
int arr_18 [20] ;
unsigned short arr_19 [20] ;
unsigned short arr_20 [20] [20] [20] ;
short arr_25 [20] [20] [20] ;
unsigned char arr_26 [20] [20] [20] ;
unsigned short arr_29 [20] ;
unsigned short arr_30 [20] [20] ;
unsigned int arr_34 [20] [20] [20] [20] ;
short arr_36 [20] ;
long long int arr_15 [20] ;
signed char arr_22 [20] [20] [20] [20] ;
signed char arr_52 [20] ;
long long int arr_53 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 7758048109079325489LL : 8777842758039422629LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -7451874671694327029LL : -4136725308120602431LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-29 : (signed char)-85;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = -5508743963616698812LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = 7181367816207656602ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_18 [i_0] = -1376393897;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (unsigned short)42616;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)44409;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)21114 : (short)29716;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)204 : (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_29 [i_0] = (unsigned short)43960;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_30 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)43781 : (unsigned short)38397;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2773559794U : 1360894075U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? (short)-26064 : (short)537;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = -7121423666344467314LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)29 : (signed char)48;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_52 [i_0] = (i_0 % 2 == 0) ? (signed char)-1 : (signed char)-85;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_53 [i_0] = (i_0 % 2 == 0) ? 7999463197732558469LL : 4417291920388708699LL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_53 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
