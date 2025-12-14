#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
unsigned int var_1 = 1267503068U;
long long int var_3 = -1913908217793725972LL;
unsigned long long int var_4 = 9472935762276061477ULL;
unsigned short var_6 = (unsigned short)33544;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)167;
int var_9 = 1070627619;
int zero = 0;
unsigned char var_17 = (unsigned char)163;
unsigned int var_18 = 3531417042U;
int var_19 = -1367912729;
unsigned char var_20 = (unsigned char)103;
unsigned int var_21 = 1281545869U;
int var_22 = 1405713660;
unsigned long long int var_23 = 14370561276098542465ULL;
int var_24 = -1133905001;
_Bool var_25 = (_Bool)1;
unsigned char arr_0 [24] ;
int arr_4 [23] ;
unsigned short arr_8 [23] [23] ;
unsigned short arr_2 [24] ;
unsigned int arr_3 [24] ;
unsigned int arr_6 [23] ;
unsigned short arr_10 [23] ;
unsigned char arr_11 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)222;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1253302737;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)35640;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)57014;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1787866436U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 1606898535U : 822052858U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (unsigned short)41842 : (unsigned short)64326;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)141 : (unsigned char)167;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
