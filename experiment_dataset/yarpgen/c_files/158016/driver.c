#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)8472;
short var_3 = (short)-15980;
unsigned short var_4 = (unsigned short)42553;
unsigned short var_9 = (unsigned short)16465;
unsigned char var_10 = (unsigned char)3;
int zero = 0;
unsigned short var_11 = (unsigned short)51913;
signed char var_12 = (signed char)31;
short var_13 = (short)20154;
signed char var_14 = (signed char)116;
long long int arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_2 [22] ;
_Bool arr_3 [22] [22] [22] ;
unsigned long long int arr_4 [22] [22] ;
unsigned long long int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 4678340783152930231LL : 3559441275955157663LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 5873926778628829998ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3454755622111436872ULL : 8177092484272503575ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 12993649462274543371ULL : 7898435994309186559ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 6986925824850979542ULL : 2914508162750130351ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
