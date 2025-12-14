#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31301;
unsigned char var_6 = (unsigned char)8;
unsigned char var_7 = (unsigned char)75;
short var_8 = (short)-20926;
unsigned char var_9 = (unsigned char)189;
short var_11 = (short)21417;
unsigned char var_12 = (unsigned char)69;
short var_13 = (short)12434;
int zero = 0;
short var_15 = (short)-11126;
short var_16 = (short)-29272;
short var_17 = (short)-19659;
short var_18 = (short)-26227;
short var_19 = (short)-10537;
short arr_0 [15] ;
long long int arr_1 [15] [15] ;
unsigned char arr_2 [15] ;
short arr_4 [15] [15] [15] ;
unsigned char arr_5 [15] [15] ;
long long int arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)7386;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 6377494118333914052LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)-2983;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 4349303427648374767LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
