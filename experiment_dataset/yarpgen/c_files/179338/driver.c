#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1222640174;
unsigned short var_2 = (unsigned short)38787;
unsigned short var_9 = (unsigned short)8600;
int zero = 0;
unsigned char var_15 = (unsigned char)94;
unsigned short var_16 = (unsigned short)749;
int var_17 = 714662511;
unsigned char var_18 = (unsigned char)48;
int var_19 = -2012804355;
unsigned char var_20 = (unsigned char)29;
unsigned char var_21 = (unsigned char)192;
unsigned char var_22 = (unsigned char)191;
unsigned char arr_5 [20] ;
unsigned short arr_7 [20] ;
int arr_12 [20] [20] [20] [20] ;
unsigned char arr_13 [20] [20] [20] [20] ;
unsigned short arr_15 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (unsigned short)39595;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -1473775860 : 1778958820;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)112 : (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)7218;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
