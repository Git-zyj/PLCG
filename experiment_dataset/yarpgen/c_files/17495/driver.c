#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3394973563000692515LL;
unsigned short var_1 = (unsigned short)57961;
unsigned long long int var_2 = 17867441561128015654ULL;
unsigned char var_3 = (unsigned char)170;
unsigned int var_4 = 649386580U;
long long int var_5 = 6409224584051269601LL;
int var_6 = -1906164121;
unsigned char var_7 = (unsigned char)95;
int var_9 = 157576401;
long long int var_10 = -3986885497941656045LL;
int zero = 0;
short var_11 = (short)-6946;
unsigned char var_12 = (unsigned char)25;
int var_13 = 964084067;
unsigned short var_14 = (unsigned short)63960;
unsigned char var_15 = (unsigned char)37;
long long int var_16 = -42796193028960226LL;
int var_17 = 1370577056;
int var_18 = 1681999439;
unsigned short arr_0 [12] [12] ;
unsigned char arr_1 [12] ;
unsigned char arr_2 [12] ;
short arr_3 [12] ;
unsigned short arr_4 [12] [12] ;
unsigned short arr_5 [12] ;
unsigned char arr_6 [12] ;
int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)43700;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned char)67;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)9406;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)61225;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned short)11828;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = -1031822412;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
