#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
unsigned char var_3 = (unsigned char)75;
long long int var_4 = -7230405748290446616LL;
int var_5 = -57865640;
unsigned long long int var_6 = 9992139634773055723ULL;
unsigned int var_7 = 2423712190U;
unsigned long long int var_8 = 2162811389021728314ULL;
unsigned short var_10 = (unsigned short)25405;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)198;
unsigned long long int var_13 = 1648800096845636953ULL;
long long int arr_0 [11] [11] ;
unsigned char arr_1 [11] ;
unsigned short arr_2 [11] ;
unsigned char arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 8770171628960427356LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)37404;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)64;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
