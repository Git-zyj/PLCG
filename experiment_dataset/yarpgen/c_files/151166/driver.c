#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 760429760;
unsigned long long int var_3 = 9145007580589153844ULL;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned int var_17 = 2660237857U;
int zero = 0;
int var_19 = 781753788;
unsigned short var_20 = (unsigned short)7028;
unsigned char var_21 = (unsigned char)103;
unsigned char arr_1 [17] [17] ;
unsigned long long int arr_3 [17] [17] [17] ;
unsigned int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 16857465133794480392ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 4042819257U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
