#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)167;
signed char var_5 = (signed char)-98;
unsigned char var_14 = (unsigned char)75;
int zero = 0;
unsigned long long int var_20 = 5777035127855210261ULL;
unsigned char var_21 = (unsigned char)123;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)56;
unsigned long long int var_24 = 6430438785587869223ULL;
unsigned char var_25 = (unsigned char)93;
_Bool arr_2 [17] [17] ;
unsigned short arr_12 [25] ;
unsigned long long int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31850 : (unsigned short)39941;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 166209657614582125ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
