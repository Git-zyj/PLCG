#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2187723179105005560LL;
unsigned int var_5 = 945655085U;
long long int var_6 = -5853000161071834837LL;
short var_7 = (short)12144;
short var_9 = (short)14943;
short var_11 = (short)27082;
int zero = 0;
unsigned long long int var_13 = 13333727819832345671ULL;
unsigned long long int var_14 = 4695325837276696606ULL;
unsigned int var_15 = 770947224U;
int var_16 = -1235594820;
short var_17 = (short)27025;
long long int var_18 = 1840313532029693445LL;
long long int var_19 = 1784204066909459503LL;
unsigned short arr_0 [10] ;
unsigned int arr_4 [22] ;
unsigned char arr_5 [22] ;
long long int arr_6 [22] ;
unsigned char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)25707;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 3419374860U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 836577240332659658LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)129;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
