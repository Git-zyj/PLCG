#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2134709691U;
unsigned int var_2 = 1758870211U;
unsigned char var_5 = (unsigned char)244;
unsigned char var_7 = (unsigned char)193;
unsigned int var_8 = 200786961U;
unsigned short var_14 = (unsigned short)2381;
unsigned char var_15 = (unsigned char)73;
unsigned int var_16 = 3346867658U;
int zero = 0;
unsigned short var_19 = (unsigned short)1472;
unsigned short var_20 = (unsigned short)1134;
unsigned short var_21 = (unsigned short)11190;
unsigned short var_22 = (unsigned short)8253;
long long int var_23 = -9116673103430271668LL;
unsigned int var_24 = 3319509332U;
unsigned long long int arr_0 [12] ;
_Bool arr_1 [12] ;
unsigned int arr_2 [12] ;
unsigned char arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1356600631405527510ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3806682904U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)70 : (unsigned char)206;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
