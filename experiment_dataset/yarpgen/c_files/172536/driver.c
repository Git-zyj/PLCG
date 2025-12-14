#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
unsigned long long int var_2 = 5389806312525926073ULL;
unsigned char var_3 = (unsigned char)197;
short var_4 = (short)30630;
unsigned int var_5 = 1290627955U;
unsigned char var_6 = (unsigned char)76;
long long int var_8 = 4004423529391948810LL;
signed char var_9 = (signed char)-3;
int zero = 0;
unsigned long long int var_10 = 8581450166627556385ULL;
unsigned long long int var_11 = 527039229513667425ULL;
int var_12 = -1190946548;
unsigned char var_13 = (unsigned char)107;
unsigned char var_14 = (unsigned char)35;
short var_15 = (short)2532;
unsigned int var_16 = 56515502U;
short var_17 = (short)-20369;
unsigned char var_18 = (unsigned char)204;
int var_19 = -740565461;
short var_20 = (short)-20281;
unsigned char var_21 = (unsigned char)58;
short var_22 = (short)26778;
signed char arr_0 [23] ;
unsigned char arr_1 [23] ;
long long int arr_3 [23] ;
unsigned char arr_4 [23] ;
int arr_5 [23] [23] ;
unsigned long long int arr_6 [23] [23] [23] ;
short arr_8 [23] [23] [23] [23] ;
unsigned long long int arr_9 [23] [23] [23] [23] ;
unsigned long long int arr_10 [23] [23] [23] [23] [23] ;
short arr_11 [23] [23] [23] [23] [23] ;
unsigned long long int arr_14 [22] ;
short arr_15 [22] ;
long long int arr_17 [22] [22] ;
unsigned short arr_18 [22] ;
unsigned short arr_20 [22] [22] [22] ;
unsigned short arr_21 [22] [22] [22] [22] ;
short arr_24 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-121 : (signed char)-33;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 6739793052634016834LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 716993570 : 1248640993;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 6671389496809424355ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-4768;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 12429708298262982033ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 15876210247480238855ULL : 16245498293319204854ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)20295 : (short)14491;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = 11008663935663480740ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-12811 : (short)18061;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 8203023413621185914LL : 1451670778700224058LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (unsigned short)816;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (unsigned short)3902;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)11920 : (unsigned short)46689;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-4392;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
