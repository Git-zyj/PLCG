#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)40;
unsigned char var_2 = (unsigned char)248;
unsigned char var_4 = (unsigned char)119;
unsigned int var_5 = 722980437U;
unsigned int var_7 = 2016922573U;
unsigned char var_8 = (unsigned char)66;
unsigned char var_9 = (unsigned char)15;
unsigned char var_10 = (unsigned char)80;
unsigned int var_11 = 300100581U;
unsigned char var_12 = (unsigned char)112;
unsigned int var_13 = 2057821063U;
unsigned char var_14 = (unsigned char)41;
int zero = 0;
unsigned char var_17 = (unsigned char)114;
unsigned char var_18 = (unsigned char)106;
unsigned char var_19 = (unsigned char)134;
unsigned char var_20 = (unsigned char)53;
unsigned char var_21 = (unsigned char)156;
unsigned char var_22 = (unsigned char)61;
unsigned int var_23 = 3032147987U;
unsigned int var_24 = 24584033U;
unsigned int var_25 = 109425742U;
unsigned char arr_0 [14] ;
unsigned char arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
unsigned char arr_4 [14] [14] ;
unsigned int arr_5 [14] ;
unsigned char arr_7 [12] [12] ;
unsigned int arr_9 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1065211967U : 74919399U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)171 : (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 196709568U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 598565177U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
