#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)23842;
short var_3 = (short)5772;
unsigned long long int var_6 = 11499823960924426442ULL;
unsigned short var_10 = (unsigned short)42675;
unsigned int var_13 = 3336526348U;
int var_15 = -1641356811;
unsigned int var_16 = 2289671143U;
unsigned long long int var_18 = 16620238838566819849ULL;
int zero = 0;
int var_20 = -84595599;
signed char var_21 = (signed char)-3;
int var_22 = 1355145560;
int var_23 = 1596151943;
int arr_1 [21] ;
int arr_5 [23] [23] ;
signed char arr_2 [21] ;
int arr_3 [21] ;
int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 1618134546;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -290760965;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -663343754;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -845806567;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
