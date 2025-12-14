#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2591895059U;
unsigned long long int var_2 = 11549732522256817064ULL;
short var_3 = (short)6242;
signed char var_4 = (signed char)-105;
signed char var_5 = (signed char)-82;
int var_6 = -1728293929;
unsigned long long int var_7 = 10915107552763847928ULL;
int var_8 = -88985010;
unsigned char var_9 = (unsigned char)146;
unsigned char var_10 = (unsigned char)49;
short var_11 = (short)9214;
unsigned long long int var_12 = 17563859885325959749ULL;
int zero = 0;
unsigned int var_13 = 1738794848U;
long long int var_14 = 82145702582440518LL;
int var_15 = 1865605009;
_Bool var_16 = (_Bool)1;
unsigned char arr_0 [22] [22] ;
unsigned char arr_1 [22] ;
_Bool arr_6 [22] ;
unsigned long long int arr_2 [22] ;
short arr_3 [22] ;
signed char arr_4 [22] ;
unsigned int arr_8 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 10197889983664037611ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)-22659;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = 141489388U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
