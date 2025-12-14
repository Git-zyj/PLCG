#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 1732220558472420991LL;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)19479;
unsigned short var_4 = (unsigned short)1724;
unsigned short var_6 = (unsigned short)32637;
int var_7 = 3418534;
unsigned char var_8 = (unsigned char)222;
unsigned short var_9 = (unsigned short)54241;
long long int var_10 = 7973945651647611698LL;
int zero = 0;
long long int var_11 = 4652854037984244131LL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)21473;
unsigned char arr_0 [21] [21] ;
long long int arr_1 [21] [21] ;
long long int arr_3 [21] [21] ;
unsigned char arr_4 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)36 : (unsigned char)236;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -7164021626799507067LL : -3831612641164520048LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = -2871674750238883275LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)167 : (unsigned char)192;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
