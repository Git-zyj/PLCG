#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11255723203037938984ULL;
unsigned char var_3 = (unsigned char)38;
unsigned char var_4 = (unsigned char)171;
short var_5 = (short)10224;
unsigned long long int var_10 = 13092781890124012218ULL;
int zero = 0;
int var_11 = 1256461690;
unsigned int var_12 = 1935792493U;
int var_13 = 596458096;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_2 [21] [21] ;
unsigned long long int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 669910147791833095ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 10602680303065691815ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 8382330383808709805ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
