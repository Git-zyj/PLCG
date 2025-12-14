#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1263127374;
unsigned long long int var_7 = 15921778205076800152ULL;
unsigned char var_13 = (unsigned char)181;
int zero = 0;
unsigned long long int var_19 = 12888163697620238598ULL;
int var_20 = 2120571600;
int var_21 = 507007692;
unsigned long long int arr_0 [24] ;
int arr_2 [24] [24] ;
unsigned char arr_3 [24] ;
unsigned char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 8396064648383757914ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 1926151537;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned char)241;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
