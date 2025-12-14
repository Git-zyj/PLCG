#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1621357535;
unsigned char var_1 = (unsigned char)82;
unsigned char var_3 = (unsigned char)51;
unsigned char var_7 = (unsigned char)4;
unsigned char var_8 = (unsigned char)43;
signed char var_10 = (signed char)92;
unsigned char var_11 = (unsigned char)70;
unsigned char var_12 = (unsigned char)75;
int var_13 = 1186627640;
unsigned char var_14 = (unsigned char)92;
signed char var_15 = (signed char)-94;
signed char var_16 = (signed char)44;
int var_17 = 303256373;
int zero = 0;
int var_18 = 1809119163;
unsigned char var_19 = (unsigned char)222;
unsigned char var_20 = (unsigned char)210;
int var_21 = -1359093243;
unsigned char var_22 = (unsigned char)113;
unsigned char var_23 = (unsigned char)193;
unsigned char var_24 = (unsigned char)86;
unsigned char var_25 = (unsigned char)92;
signed char var_26 = (signed char)-68;
int var_27 = 1203280203;
unsigned char var_28 = (unsigned char)196;
unsigned char var_29 = (unsigned char)205;
int var_30 = -1705111515;
signed char var_31 = (signed char)49;
unsigned char var_32 = (unsigned char)248;
unsigned char var_33 = (unsigned char)2;
unsigned char var_34 = (unsigned char)70;
unsigned char var_35 = (unsigned char)75;
unsigned char var_36 = (unsigned char)216;
unsigned char var_37 = (unsigned char)222;
unsigned char var_38 = (unsigned char)132;
signed char var_39 = (signed char)1;
signed char var_40 = (signed char)-51;
unsigned char var_41 = (unsigned char)218;
signed char var_42 = (signed char)-105;
unsigned char var_43 = (unsigned char)34;
unsigned char var_44 = (unsigned char)224;
unsigned char var_45 = (unsigned char)185;
signed char var_46 = (signed char)11;
signed char var_47 = (signed char)-51;
signed char var_48 = (signed char)-90;
signed char var_49 = (signed char)-62;
unsigned char var_50 = (unsigned char)64;
unsigned char var_51 = (unsigned char)212;
unsigned char var_52 = (unsigned char)184;
int var_53 = -1437432559;
int arr_0 [21] [21] ;
signed char arr_3 [21] ;
unsigned char arr_4 [21] [21] ;
int arr_5 [21] [21] [21] ;
unsigned char arr_7 [21] [21] [21] [21] ;
signed char arr_8 [21] [21] [21] ;
unsigned char arr_10 [21] [21] [21] ;
signed char arr_11 [21] [21] ;
unsigned char arr_13 [21] [21] ;
int arr_17 [21] [21] [21] ;
unsigned char arr_18 [21] [21] [21] [21] ;
unsigned char arr_19 [21] [21] [21] [21] ;
unsigned char arr_20 [21] [21] [21] [21] [21] [21] ;
unsigned char arr_21 [21] [21] [21] ;
signed char arr_22 [21] [21] [21] ;
unsigned char arr_23 [21] ;
unsigned char arr_24 [21] [21] [21] [21] ;
unsigned char arr_38 [12] [12] [12] [12] [12] [12] ;
unsigned char arr_50 [20] ;
unsigned char arr_52 [20] [20] ;
int arr_56 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 170373621;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-52;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -2029177866;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)32;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)90 : (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = -1984749937;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)228;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)15 : (signed char)-115;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (unsigned char)240;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)63;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? (unsigned char)96 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_52 [i_0] [i_1] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = 618895555;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
