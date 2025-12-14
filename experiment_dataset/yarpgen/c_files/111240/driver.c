#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)26;
unsigned short var_1 = (unsigned short)22074;
signed char var_3 = (signed char)-90;
signed char var_4 = (signed char)-103;
signed char var_5 = (signed char)63;
unsigned char var_6 = (unsigned char)110;
unsigned char var_8 = (unsigned char)116;
unsigned char var_9 = (unsigned char)121;
long long int var_10 = -7699740599770335756LL;
signed char var_11 = (signed char)-15;
unsigned char var_12 = (unsigned char)73;
signed char var_13 = (signed char)85;
int zero = 0;
unsigned char var_15 = (unsigned char)38;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)35023;
unsigned char var_18 = (unsigned char)87;
unsigned char var_19 = (unsigned char)85;
unsigned short var_20 = (unsigned short)8364;
signed char var_21 = (signed char)84;
unsigned char var_22 = (unsigned char)25;
signed char var_23 = (signed char)126;
signed char var_24 = (signed char)-93;
unsigned short var_25 = (unsigned short)12237;
unsigned char var_26 = (unsigned char)186;
unsigned short var_27 = (unsigned short)55382;
unsigned char var_28 = (unsigned char)31;
unsigned short var_29 = (unsigned short)14528;
signed char var_30 = (signed char)-24;
unsigned char var_31 = (unsigned char)98;
unsigned char var_32 = (unsigned char)120;
unsigned short var_33 = (unsigned short)21882;
_Bool var_34 = (_Bool)0;
signed char var_35 = (signed char)-15;
unsigned short var_36 = (unsigned short)14181;
unsigned char var_37 = (unsigned char)127;
unsigned char var_38 = (unsigned char)41;
signed char var_39 = (signed char)-87;
unsigned char var_40 = (unsigned char)81;
unsigned char var_41 = (unsigned char)213;
signed char var_42 = (signed char)115;
long long int var_43 = -1442208840271561593LL;
unsigned short var_44 = (unsigned short)20736;
unsigned short arr_0 [21] [21] ;
long long int arr_1 [21] ;
unsigned short arr_5 [21] ;
unsigned short arr_7 [21] [21] ;
unsigned char arr_10 [15] ;
unsigned char arr_12 [15] ;
unsigned short arr_13 [15] [15] [15] ;
signed char arr_14 [15] [15] [15] ;
_Bool arr_17 [15] [15] ;
unsigned short arr_28 [16] [16] ;
unsigned short arr_30 [16] ;
unsigned char arr_31 [16] ;
unsigned char arr_34 [16] ;
unsigned char arr_35 [16] ;
long long int arr_2 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)15748;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 8954307446869452503LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)20780;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)45563;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned char)106 : (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)217;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned short)58229;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)-59 : (signed char)-25;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_28 [i_0] [i_1] = (unsigned short)36093;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = (unsigned short)29572;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_31 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (unsigned char)143 : (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_35 [i_0] = (i_0 % 2 == 0) ? (unsigned char)17 : (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 5240332679545096127LL;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
