#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)255;
unsigned long long int var_3 = 10571144257133778340ULL;
unsigned int var_4 = 3820386393U;
short var_5 = (short)-15375;
unsigned long long int var_6 = 16414496940928971073ULL;
_Bool var_9 = (_Bool)0;
short var_11 = (short)20657;
int zero = 0;
unsigned char var_12 = (unsigned char)87;
unsigned int var_13 = 3680499593U;
int var_14 = -1721909990;
long long int var_15 = 7063637540035943662LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 697429801U;
unsigned char arr_0 [10] ;
int arr_2 [10] ;
long long int arr_5 [10] ;
int arr_3 [10] ;
long long int arr_6 [10] [10] ;
unsigned long long int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1543103260;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -7722153289736043099LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 950384439;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = 7289981233856349706LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 8797826004471563221ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
