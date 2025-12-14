#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2468898871U;
long long int var_2 = -6278759289910897763LL;
unsigned short var_3 = (unsigned short)59879;
unsigned long long int var_4 = 13853973400471478152ULL;
unsigned char var_5 = (unsigned char)170;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)59;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 923902661U;
unsigned char var_10 = (unsigned char)20;
unsigned int var_11 = 2500427422U;
long long int var_13 = -3366792556685283536LL;
unsigned char var_14 = (unsigned char)183;
long long int var_16 = 2170934961272763875LL;
unsigned short var_17 = (unsigned short)3282;
int zero = 0;
unsigned char var_19 = (unsigned char)255;
unsigned long long int var_20 = 3642731438921776277ULL;
long long int arr_1 [23] [23] ;
int arr_4 [23] ;
unsigned int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 1412523042941389582LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1929279084;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 467758691U : 3069389861U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
