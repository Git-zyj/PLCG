#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)67;
unsigned char var_3 = (unsigned char)110;
unsigned char var_5 = (unsigned char)33;
unsigned short var_7 = (unsigned short)12743;
short var_8 = (short)12005;
unsigned char var_10 = (unsigned char)119;
unsigned int var_11 = 187857969U;
unsigned int var_15 = 2560209062U;
int zero = 0;
short var_16 = (short)13011;
long long int var_17 = -238627881897557343LL;
unsigned long long int var_18 = 3054554878245894341ULL;
unsigned int var_19 = 1316462670U;
unsigned long long int var_20 = 10984871602701665620ULL;
_Bool arr_1 [20] ;
unsigned char arr_4 [22] ;
long long int arr_5 [22] ;
_Bool arr_7 [22] ;
_Bool arr_3 [20] [20] ;
_Bool arr_8 [22] ;
short arr_9 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -4130680366098987018LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-6935;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
