#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-6;
signed char var_3 = (signed char)115;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)24136;
unsigned long long int var_7 = 9687200934864727673ULL;
signed char var_9 = (signed char)-2;
unsigned int var_10 = 1735821145U;
unsigned char var_11 = (unsigned char)159;
unsigned int var_12 = 3839393962U;
int var_13 = 395728863;
int zero = 0;
short var_15 = (short)2048;
short var_16 = (short)15240;
_Bool var_17 = (_Bool)1;
short var_18 = (short)19646;
unsigned short arr_0 [22] ;
int arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned short)9496;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 1264909711;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 1319600111693328274ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
