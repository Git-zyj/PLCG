#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27762;
unsigned short var_2 = (unsigned short)61159;
unsigned char var_4 = (unsigned char)10;
unsigned short var_5 = (unsigned short)21404;
unsigned char var_7 = (unsigned char)194;
unsigned short var_9 = (unsigned short)50144;
signed char var_10 = (signed char)115;
unsigned char var_13 = (unsigned char)185;
signed char var_15 = (signed char)-8;
unsigned char var_16 = (unsigned char)27;
int zero = 0;
signed char var_17 = (signed char)-8;
unsigned char var_18 = (unsigned char)37;
signed char var_19 = (signed char)46;
signed char var_20 = (signed char)-45;
unsigned char var_21 = (unsigned char)102;
unsigned short var_22 = (unsigned short)13361;
unsigned char var_23 = (unsigned char)226;
unsigned short var_24 = (unsigned short)9874;
unsigned short var_25 = (unsigned short)15012;
signed char var_26 = (signed char)-35;
signed char var_27 = (signed char)-17;
unsigned short var_28 = (unsigned short)9604;
unsigned char var_29 = (unsigned char)85;
unsigned char var_30 = (unsigned char)164;
unsigned char var_31 = (unsigned char)179;
signed char var_32 = (signed char)48;
unsigned short var_33 = (unsigned short)4604;
unsigned short var_34 = (unsigned short)1753;
unsigned short var_35 = (unsigned short)52845;
signed char var_36 = (signed char)-42;
unsigned char var_37 = (unsigned char)16;
unsigned short var_38 = (unsigned short)46348;
signed char var_39 = (signed char)-84;
unsigned short var_40 = (unsigned short)64562;
signed char var_41 = (signed char)11;
signed char arr_0 [23] ;
signed char arr_1 [23] ;
unsigned short arr_3 [23] ;
signed char arr_4 [23] [23] ;
unsigned short arr_12 [18] ;
unsigned char arr_19 [18] [18] [18] ;
unsigned short arr_20 [18] [18] [18] ;
unsigned short arr_27 [18] [18] [18] ;
unsigned short arr_35 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)61428;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-104 : (signed char)33;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (unsigned short)32010;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)21700;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (unsigned short)43951;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)21358 : (unsigned short)54025;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
