#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3338121564557280883LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = 8518050460097135881LL;
unsigned char var_7 = (unsigned char)83;
int var_8 = -641432386;
unsigned char var_9 = (unsigned char)38;
long long int var_12 = -3856460522062102038LL;
long long int var_14 = 5396889684194570977LL;
int zero = 0;
long long int var_15 = -768285026500615305LL;
unsigned long long int var_16 = 6651765203741237761ULL;
int arr_0 [15] ;
short arr_1 [15] ;
_Bool arr_3 [15] ;
long long int arr_4 [15] [15] ;
unsigned short arr_6 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 547961921 : 2088869255;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)5556;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 3280043838758587501LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)791 : (unsigned short)39596;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
