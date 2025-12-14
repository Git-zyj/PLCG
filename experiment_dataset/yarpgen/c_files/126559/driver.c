#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)30159;
_Bool var_2 = (_Bool)1;
unsigned char var_4 = (unsigned char)46;
short var_5 = (short)591;
unsigned char var_7 = (unsigned char)175;
unsigned char var_9 = (unsigned char)194;
int zero = 0;
signed char var_10 = (signed char)-54;
long long int var_11 = 7441859332477520931LL;
int var_12 = -1391258845;
unsigned char var_13 = (unsigned char)124;
unsigned char var_14 = (unsigned char)246;
unsigned long long int arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
signed char arr_2 [22] ;
signed char arr_3 [22] ;
unsigned int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 14180492653036518506ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 15143926822300236598ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)24;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 2069276841U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
