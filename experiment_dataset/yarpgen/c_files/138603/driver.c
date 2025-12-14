#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-122;
unsigned long long int var_2 = 6385720409021165274ULL;
unsigned long long int var_3 = 1576780559203377432ULL;
short var_4 = (short)-25961;
signed char var_6 = (signed char)-103;
unsigned char var_8 = (unsigned char)6;
unsigned short var_10 = (unsigned short)10064;
signed char var_11 = (signed char)50;
unsigned long long int var_12 = 4355130602244425411ULL;
short var_13 = (short)25275;
signed char var_14 = (signed char)82;
int zero = 0;
unsigned long long int var_15 = 426922984332276707ULL;
short var_16 = (short)531;
signed char var_17 = (signed char)61;
unsigned int var_18 = 1977417376U;
signed char var_19 = (signed char)-68;
unsigned char arr_2 [10] [10] ;
long long int arr_4 [10] [10] ;
unsigned char arr_5 [10] [10] [10] ;
short arr_6 [10] [10] ;
signed char arr_8 [10] ;
signed char arr_10 [10] ;
long long int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 2164005030008420612LL : 6971581076996102922LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)12 : (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (short)7837;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)-83 : (signed char)21;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)14 : (signed char)-4;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 5928581041107909413LL : -45205660676854828LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
