#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8109;
unsigned char var_3 = (unsigned char)71;
int var_4 = 1455543480;
int var_5 = -863235677;
short var_7 = (short)14719;
unsigned char var_8 = (unsigned char)149;
int var_9 = 1984284497;
short var_10 = (short)25902;
int var_11 = 2067891991;
int var_12 = 1327507546;
int var_13 = -1483763405;
int zero = 0;
int var_14 = -1152232707;
int var_15 = 1943428574;
unsigned char var_16 = (unsigned char)36;
int var_17 = 995125784;
int var_18 = -1296533300;
unsigned char var_19 = (unsigned char)105;
int var_20 = 958868258;
int var_21 = -953522498;
unsigned char var_22 = (unsigned char)216;
short var_23 = (short)-26496;
unsigned char var_24 = (unsigned char)38;
int var_25 = -1130341960;
int arr_0 [24] ;
short arr_1 [24] [24] ;
int arr_2 [24] ;
int arr_4 [24] ;
int arr_6 [24] [24] [24] ;
unsigned char arr_8 [24] [24] [24] [24] ;
int arr_10 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -2064645307;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-12506;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = -459895493;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -1521604073;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 647071744;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -2112796198;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
