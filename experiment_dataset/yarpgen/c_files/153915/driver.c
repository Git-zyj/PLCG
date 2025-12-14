#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)86;
unsigned short var_1 = (unsigned short)42381;
unsigned short var_2 = (unsigned short)61076;
short var_3 = (short)-32391;
unsigned short var_4 = (unsigned short)28442;
unsigned char var_5 = (unsigned char)130;
long long int var_6 = 1614967979249689181LL;
unsigned short var_7 = (unsigned short)63379;
unsigned char var_8 = (unsigned char)101;
unsigned short var_9 = (unsigned short)46169;
signed char var_10 = (signed char)40;
short var_11 = (short)32220;
unsigned char var_12 = (unsigned char)214;
unsigned short var_13 = (unsigned short)59104;
int zero = 0;
long long int var_14 = 5881963953237864849LL;
unsigned short var_15 = (unsigned short)14649;
short var_16 = (short)-15993;
unsigned short var_17 = (unsigned short)36619;
short var_18 = (short)-23391;
signed char var_19 = (signed char)-108;
unsigned char var_20 = (unsigned char)188;
unsigned char var_21 = (unsigned char)62;
short var_22 = (short)20699;
signed char var_23 = (signed char)73;
signed char var_24 = (signed char)37;
signed char var_25 = (signed char)-52;
unsigned char var_26 = (unsigned char)124;
unsigned int var_27 = 2514737278U;
unsigned short var_28 = (unsigned short)34833;
_Bool var_29 = (_Bool)1;
unsigned int var_30 = 2971344692U;
long long int var_31 = -3478129927067954126LL;
signed char var_32 = (signed char)66;
long long int arr_2 [12] [12] ;
unsigned char arr_3 [12] ;
unsigned short arr_5 [12] [12] ;
signed char arr_7 [12] [12] [12] [12] ;
unsigned char arr_9 [12] [12] [12] [12] ;
signed char arr_11 [12] [12] ;
_Bool arr_16 [12] [12] [12] ;
signed char arr_23 [12] [12] ;
_Bool arr_24 [12] [12] ;
unsigned long long int arr_26 [12] ;
short arr_27 [12] [12] [12] [12] ;
unsigned int arr_29 [12] [12] [12] [12] ;
signed char arr_30 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = -2757394319175754244LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)45193;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)107 : (signed char)-81;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_26 [i_0] = 14643988383437160736ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (short)-7507;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 1595595985U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)65;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
