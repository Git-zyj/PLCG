#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)57653;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)0;
long long int var_12 = -693520655026585616LL;
unsigned long long int var_13 = 10981471734299841438ULL;
long long int var_14 = -221748342086871465LL;
long long int var_15 = 166095418306671469LL;
unsigned int var_16 = 308386541U;
long long int var_17 = 3998217594514182207LL;
int arr_0 [17] [17] ;
int arr_1 [17] ;
unsigned int arr_3 [16] ;
unsigned int arr_4 [16] ;
unsigned short arr_7 [17] ;
_Bool arr_13 [17] ;
long long int arr_2 [17] [17] ;
signed char arr_5 [16] [16] ;
int arr_6 [16] ;
int arr_17 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = -1237869026;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 111022856;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 1842984886U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 4278584550U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)45006;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1015896991642663409LL : -139699117400517622LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -1061443978;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? -1622447472 : 1580109915;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
