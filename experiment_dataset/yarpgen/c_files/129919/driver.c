#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
signed char var_1 = (signed char)58;
signed char var_2 = (signed char)101;
short var_3 = (short)-17572;
int var_4 = 1247371527;
signed char var_5 = (signed char)114;
unsigned char var_6 = (unsigned char)40;
unsigned short var_7 = (unsigned short)30772;
unsigned short var_8 = (unsigned short)34222;
unsigned char var_9 = (unsigned char)253;
int var_10 = -1084166622;
unsigned int var_12 = 968292593U;
int zero = 0;
unsigned char var_13 = (unsigned char)210;
int var_14 = -2146352003;
unsigned char var_15 = (unsigned char)111;
unsigned int var_16 = 2987147499U;
signed char var_17 = (signed char)68;
unsigned char var_18 = (unsigned char)106;
unsigned char var_19 = (unsigned char)107;
int var_20 = 753598376;
unsigned long long int var_21 = 1120963966096464766ULL;
signed char var_22 = (signed char)19;
unsigned char var_23 = (unsigned char)65;
unsigned char var_24 = (unsigned char)55;
_Bool var_25 = (_Bool)1;
unsigned long long int var_26 = 12567819494154572ULL;
long long int var_27 = -6253962949053390436LL;
unsigned short var_28 = (unsigned short)52197;
unsigned char var_29 = (unsigned char)54;
_Bool var_30 = (_Bool)1;
signed char var_31 = (signed char)-43;
unsigned int var_32 = 1492904075U;
int arr_0 [14] ;
short arr_3 [14] [14] ;
short arr_5 [14] [14] ;
unsigned int arr_6 [14] [14] [14] ;
_Bool arr_7 [14] [14] [14] ;
unsigned char arr_9 [14] [14] [14] [14] ;
unsigned char arr_11 [14] [14] [14] [14] ;
signed char arr_13 [14] [14] ;
unsigned int arr_14 [14] [14] ;
int arr_15 [14] [14] ;
unsigned short arr_17 [14] ;
long long int arr_19 [14] ;
unsigned char arr_20 [14] [14] ;
signed char arr_22 [14] [14] ;
short arr_25 [14] [14] [14] ;
unsigned int arr_34 [14] [14] ;
unsigned char arr_12 [14] [14] [14] [14] ;
signed char arr_37 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -1251002413;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-14722;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-29654;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 155505873U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (signed char)-22;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_14 [i_0] [i_1] = 4213266473U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = 1457312391;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_17 [i_0] = (unsigned short)29439;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = 103262769264007975LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)100;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (short)14055;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_34 [i_0] [i_1] = 3053909133U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)121 : (unsigned char)210;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = (signed char)-63;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_37 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
