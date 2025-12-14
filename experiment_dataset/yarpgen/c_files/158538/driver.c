#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned char var_1 = (unsigned char)159;
unsigned char var_2 = (unsigned char)191;
unsigned char var_3 = (unsigned char)79;
short var_6 = (short)15000;
unsigned long long int var_7 = 17337783876495213799ULL;
unsigned long long int var_11 = 8448939603650162338ULL;
short var_12 = (short)16400;
int zero = 0;
unsigned long long int var_13 = 12455161487293005169ULL;
unsigned long long int var_14 = 9173083848330129147ULL;
short var_15 = (short)12264;
unsigned long long int var_16 = 3805054771535735281ULL;
unsigned long long int var_17 = 6736006256216594622ULL;
unsigned char var_18 = (unsigned char)122;
short var_19 = (short)14760;
unsigned long long int var_20 = 8903621862434194578ULL;
unsigned char arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned char arr_4 [14] [14] ;
short arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)223;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 14067092691417706471ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)169 : (unsigned char)154;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)26781 : (short)-26749;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
