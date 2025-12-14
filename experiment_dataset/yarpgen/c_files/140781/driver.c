#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1516;
unsigned long long int var_2 = 13960492004996300010ULL;
_Bool var_5 = (_Bool)0;
long long int var_15 = -7339958418247756179LL;
int zero = 0;
int var_17 = -1773829318;
short var_18 = (short)-15107;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3641886170U;
unsigned short var_21 = (unsigned short)21019;
int var_22 = -1605793837;
unsigned long long int arr_1 [13] ;
unsigned char arr_2 [13] ;
unsigned short arr_3 [13] ;
_Bool arr_4 [13] [13] ;
unsigned char arr_7 [13] [13] ;
_Bool arr_10 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 13216501279143172125ULL : 14500007270882770587ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)74 : (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)9765;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)162 : (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
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
