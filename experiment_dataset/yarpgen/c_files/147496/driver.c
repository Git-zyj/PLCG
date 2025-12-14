#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1662976236208791199ULL;
unsigned char var_1 = (unsigned char)192;
unsigned int var_2 = 3517595363U;
unsigned long long int var_3 = 14830500286268460221ULL;
long long int var_4 = 5962442654020655163LL;
unsigned int var_5 = 956325484U;
long long int var_7 = 7274741424995865643LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -2312135569350278839LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 4300858926243634498ULL;
unsigned short var_14 = (unsigned short)57900;
unsigned int var_15 = 592632187U;
long long int arr_1 [10] ;
_Bool arr_2 [10] [10] ;
short arr_3 [10] ;
signed char arr_7 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1362699884880410188LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-25466;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)126;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
