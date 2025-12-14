#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14012659892670761652ULL;
unsigned short var_2 = (unsigned short)32411;
unsigned long long int var_3 = 10259142388904610404ULL;
unsigned short var_4 = (unsigned short)50561;
long long int var_6 = -5120538723011751895LL;
unsigned long long int var_7 = 11617888834478815302ULL;
unsigned short var_8 = (unsigned short)56559;
unsigned long long int var_9 = 17870831464070608425ULL;
unsigned int var_10 = 2879885619U;
unsigned long long int var_11 = 14400669101335700867ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)91;
unsigned long long int var_13 = 18226156908165220573ULL;
unsigned long long int var_14 = 1322977049090139496ULL;
int var_15 = -1726432759;
unsigned long long int var_16 = 8209861014996317628ULL;
unsigned int var_17 = 407431151U;
long long int var_18 = 2701117507698728626LL;
unsigned long long int var_19 = 5574581428219600710ULL;
unsigned long long int var_20 = 7004234031898035162ULL;
unsigned long long int var_21 = 9416691870752677065ULL;
long long int var_22 = 1736212591926845163LL;
signed char var_23 = (signed char)-1;
long long int var_24 = 1050692375101719759LL;
unsigned long long int var_25 = 9408826793282465540ULL;
unsigned int var_26 = 3918645028U;
unsigned long long int var_27 = 9801788512932709855ULL;
unsigned int var_28 = 4165506520U;
unsigned char var_29 = (unsigned char)187;
unsigned long long int var_30 = 9269693040244539169ULL;
unsigned char var_31 = (unsigned char)173;
unsigned char var_32 = (unsigned char)148;
unsigned long long int var_33 = 14943453774675363778ULL;
long long int arr_0 [17] [17] ;
long long int arr_1 [17] [17] ;
long long int arr_2 [17] [17] ;
unsigned short arr_4 [23] ;
unsigned short arr_5 [23] [23] ;
unsigned long long int arr_6 [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
int arr_9 [23] [23] [23] [23] ;
unsigned short arr_13 [23] ;
unsigned char arr_14 [23] [23] ;
unsigned short arr_15 [23] [23] ;
long long int arr_20 [23] [23] ;
signed char arr_25 [23] [23] [23] ;
int arr_29 [23] [23] [23] [23] ;
unsigned long long int arr_33 [23] [23] [23] [23] ;
unsigned short arr_8 [23] ;
unsigned int arr_37 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -7814755853542191027LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -6446143883569566470LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 3323817691824129586LL : -5303085802472253533LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)38211;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)14380;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = 6627933297314564568ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 5061528541514893493ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -820284261;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned short)61693;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)19617 : (unsigned short)14968;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 6715435954479928847LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)19 : (signed char)6;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = -461862553;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2911670536784930963ULL : 11624858441851259606ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned short)52294;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 1838480090U : 3553535595U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
