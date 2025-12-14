#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-70;
unsigned char var_2 = (unsigned char)44;
unsigned long long int var_3 = 4430532667356086913ULL;
unsigned char var_4 = (unsigned char)96;
unsigned short var_6 = (unsigned short)31973;
short var_7 = (short)-11818;
unsigned int var_8 = 1378586675U;
short var_9 = (short)-22549;
unsigned long long int var_11 = 5038331496980027517ULL;
unsigned short var_12 = (unsigned short)61844;
signed char var_13 = (signed char)13;
int zero = 0;
short var_14 = (short)12432;
unsigned long long int var_15 = 10423756883590781430ULL;
short var_16 = (short)27170;
unsigned int var_17 = 202611848U;
unsigned short var_18 = (unsigned short)59787;
short var_19 = (short)18777;
int var_20 = 644200891;
unsigned short var_21 = (unsigned short)18257;
unsigned char var_22 = (unsigned char)66;
unsigned int var_23 = 3062576864U;
int var_24 = -1459234626;
int var_25 = -666459582;
int var_26 = -812423878;
unsigned int var_27 = 4263286800U;
unsigned char var_28 = (unsigned char)236;
unsigned short var_29 = (unsigned short)37195;
signed char var_30 = (signed char)-71;
signed char var_31 = (signed char)-62;
long long int var_32 = 2485460787886399802LL;
long long int var_33 = -2916596756846696528LL;
unsigned short arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
unsigned char arr_3 [22] [22] ;
unsigned short arr_6 [22] [22] [22] ;
unsigned char arr_9 [22] ;
short arr_17 [22] ;
signed char arr_18 [22] [22] ;
unsigned int arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)38621 : (unsigned short)48408;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)486 : (unsigned short)30302;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)205 : (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (short)24148;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)-91;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3200973115U : 140847138U;
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
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
