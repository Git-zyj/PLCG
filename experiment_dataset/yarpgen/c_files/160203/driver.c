#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)118;
unsigned long long int var_2 = 11425650781775092670ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 1326024751712810213ULL;
unsigned long long int var_7 = 5311260862352009883ULL;
unsigned long long int var_8 = 3176687629937036663ULL;
unsigned char var_9 = (unsigned char)166;
long long int var_13 = 4057219574634541564LL;
int zero = 0;
unsigned long long int var_14 = 3299641332428051380ULL;
signed char var_15 = (signed char)-111;
unsigned long long int var_16 = 5510901313457162420ULL;
unsigned char var_17 = (unsigned char)239;
unsigned long long int arr_0 [19] [19] ;
unsigned int arr_1 [19] ;
signed char arr_2 [19] [19] ;
_Bool arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 13081191084213716683ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 3938695941U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
