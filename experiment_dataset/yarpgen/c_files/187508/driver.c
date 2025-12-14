#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)80;
signed char var_2 = (signed char)-19;
unsigned long long int var_4 = 15946847222020472971ULL;
signed char var_5 = (signed char)-80;
signed char var_6 = (signed char)26;
unsigned long long int var_7 = 15832008479686288403ULL;
signed char var_8 = (signed char)-80;
unsigned long long int var_9 = 15598710104726307748ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)-108;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-42;
signed char var_14 = (signed char)-125;
signed char var_15 = (signed char)111;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 7974381414342324457ULL;
unsigned long long int var_19 = 16170501640675878079ULL;
unsigned long long int var_20 = 14573340516437059536ULL;
signed char var_21 = (signed char)-93;
unsigned long long int var_22 = 8580874113657825591ULL;
_Bool var_23 = (_Bool)1;
unsigned char var_24 = (unsigned char)234;
_Bool var_25 = (_Bool)1;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)-127;
signed char var_28 = (signed char)57;
unsigned char var_29 = (unsigned char)181;
_Bool var_30 = (_Bool)1;
signed char var_31 = (signed char)-41;
unsigned long long int var_32 = 2437773954126603730ULL;
_Bool var_33 = (_Bool)0;
unsigned char var_34 = (unsigned char)10;
unsigned long long int var_35 = 14246329281406900113ULL;
_Bool var_36 = (_Bool)0;
_Bool var_37 = (_Bool)0;
unsigned long long int var_38 = 5548273924458212308ULL;
unsigned char var_39 = (unsigned char)33;
signed char var_40 = (signed char)-53;
signed char var_41 = (signed char)-38;
unsigned char var_42 = (unsigned char)236;
unsigned char var_43 = (unsigned char)181;
unsigned char var_44 = (unsigned char)190;
signed char var_45 = (signed char)-32;
unsigned long long int var_46 = 8556108630872093943ULL;
unsigned long long int var_47 = 13157160114891152604ULL;
unsigned long long int var_48 = 11808752642245348898ULL;
_Bool var_49 = (_Bool)1;
unsigned char var_50 = (unsigned char)48;
unsigned char var_51 = (unsigned char)253;
signed char var_52 = (signed char)40;
unsigned long long int var_53 = 7946722932822356472ULL;
unsigned char var_54 = (unsigned char)67;
signed char arr_0 [16] ;
unsigned long long int arr_1 [16] ;
_Bool arr_2 [21] ;
signed char arr_3 [21] ;
unsigned char arr_4 [21] [21] [21] ;
signed char arr_5 [21] ;
signed char arr_6 [21] [21] [21] ;
_Bool arr_8 [15] ;
signed char arr_9 [15] [15] ;
unsigned char arr_11 [12] [12] ;
_Bool arr_13 [18] [18] ;
unsigned char arr_15 [18] [18] ;
unsigned long long int arr_16 [18] [18] [18] ;
unsigned char arr_17 [18] ;
unsigned char arr_18 [18] [18] [18] ;
_Bool arr_21 [18] ;
_Bool arr_22 [18] [18] [18] [18] ;
_Bool arr_23 [18] [18] [18] ;
unsigned long long int arr_25 [18] [18] [18] [18] ;
unsigned long long int arr_26 [18] [18] [18] ;
unsigned long long int arr_27 [18] [18] [18] [18] ;
unsigned char arr_28 [18] [18] [18] [18] [18] ;
unsigned long long int arr_29 [18] [18] [18] [18] [18] ;
unsigned char arr_30 [18] [18] [18] [18] ;
_Bool arr_31 [18] [18] [18] ;
signed char arr_33 [18] [18] ;
signed char arr_34 [18] [18] [18] [18] ;
unsigned char arr_40 [18] ;
unsigned long long int arr_41 [18] [18] ;
signed char arr_42 [18] ;
_Bool arr_46 [18] ;
unsigned char arr_52 [18] [18] [18] [18] ;
_Bool arr_55 [18] [18] [18] [18] [18] ;
signed char arr_57 [18] [18] [18] ;
_Bool arr_7 [21] ;
_Bool arr_12 [12] [12] ;
_Bool arr_19 [18] ;
signed char arr_24 [18] [18] [18] ;
unsigned long long int arr_37 [18] [18] ;
signed char arr_38 [18] [18] ;
signed char arr_43 [18] ;
unsigned char arr_58 [18] ;
unsigned long long int arr_62 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)105 : (signed char)127;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 13182273325393619974ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)69 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 7011356648385109636ULL : 4087547094137024541ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_17 [i_0] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 11562677504973013494ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = 9142937817743361531ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 2754050288655906935ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 11044630279796775730ULL : 17533239097162143431ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned char)95 : (unsigned char)142;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_33 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-91 : (signed char)-34;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_40 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_41 [i_0] [i_1] = 7559062915733725561ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_42 [i_0] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_46 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_55 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_12 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-35 : (signed char)-99;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_37 [i_0] [i_1] = (i_1 % 2 == 0) ? 11372587828582139952ULL : 7988193044994501457ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_38 [i_0] [i_1] = (signed char)106;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_43 [i_0] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_58 [i_0] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_62 [i_0] = 14186386502598780702ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_54);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_37 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_38 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_43 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_62 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
