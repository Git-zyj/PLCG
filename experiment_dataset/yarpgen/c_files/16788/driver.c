#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)240;
long long int var_2 = 1350788811286379411LL;
long long int var_4 = 3872809552111305286LL;
int var_7 = -729028754;
short var_8 = (short)18456;
_Bool var_10 = (_Bool)0;
unsigned long long int var_16 = 4806507622833891539ULL;
long long int var_17 = 3642567257136399422LL;
int zero = 0;
unsigned char var_20 = (unsigned char)13;
unsigned short var_21 = (unsigned short)62991;
unsigned char var_22 = (unsigned char)214;
int var_23 = 1180644966;
int var_24 = -2069597251;
_Bool arr_0 [21] ;
long long int arr_2 [21] ;
unsigned long long int arr_6 [20] ;
unsigned char arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2306300385053075966LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 16071250345010524830ULL : 12508847725573253988ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)216;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
