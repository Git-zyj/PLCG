#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32733;
unsigned short var_1 = (unsigned short)5653;
short var_2 = (short)16082;
short var_3 = (short)7541;
unsigned short var_4 = (unsigned short)37846;
unsigned short var_6 = (unsigned short)7707;
short var_7 = (short)21373;
short var_8 = (short)-18781;
unsigned short var_9 = (unsigned short)36295;
unsigned short var_10 = (unsigned short)14365;
short var_11 = (short)17380;
unsigned short var_12 = (unsigned short)28261;
unsigned short var_13 = (unsigned short)35541;
unsigned short var_14 = (unsigned short)12053;
short var_15 = (short)-28325;
short var_16 = (short)30181;
short var_17 = (short)-21316;
short var_18 = (short)9400;
int zero = 0;
short var_19 = (short)19759;
unsigned short var_20 = (unsigned short)3037;
unsigned short var_21 = (unsigned short)29625;
unsigned short var_22 = (unsigned short)5367;
short var_23 = (short)-24151;
short var_24 = (short)-30860;
unsigned short var_25 = (unsigned short)7570;
unsigned short var_26 = (unsigned short)20707;
unsigned short var_27 = (unsigned short)56525;
unsigned short var_28 = (unsigned short)12128;
unsigned short var_29 = (unsigned short)53516;
short var_30 = (short)8325;
unsigned short var_31 = (unsigned short)24570;
unsigned short var_32 = (unsigned short)3432;
unsigned short arr_0 [23] [23] ;
short arr_1 [23] ;
short arr_2 [23] [23] ;
unsigned short arr_3 [23] [23] [23] ;
unsigned short arr_4 [23] [23] [23] ;
short arr_9 [10] ;
short arr_10 [10] ;
short arr_12 [20] [20] ;
short arr_17 [20] ;
unsigned short arr_6 [23] [23] ;
unsigned short arr_7 [23] [23] ;
unsigned short arr_8 [23] ;
short arr_15 [20] ;
short arr_19 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)43846;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)10656;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-32092;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)45486;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)41091;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (short)14642;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (short)-21495;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_12 [i_0] [i_1] = (short)1192;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_17 [i_0] = (short)-4316;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)44135;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)17177;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned short)57519;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = (short)9974;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (short)-17210;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
