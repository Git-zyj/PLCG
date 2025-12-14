#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24142;
signed char var_3 = (signed char)-1;
int var_4 = -1203501946;
long long int var_6 = 2685010153368419807LL;
long long int var_8 = -644869416426478151LL;
unsigned long long int var_15 = 10836250030481044721ULL;
signed char var_17 = (signed char)-9;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -2054392503166305604LL;
short var_21 = (short)-27205;
signed char arr_0 [21] [21] ;
unsigned int arr_1 [21] ;
long long int arr_2 [21] ;
signed char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)71 : (signed char)-95;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1030673473U : 3942973200U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 4623361498193840964LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-43 : (signed char)-60;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
