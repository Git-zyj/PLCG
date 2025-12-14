#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5109646020690064760ULL;
unsigned long long int var_6 = 11056383677407135500ULL;
unsigned char var_8 = (unsigned char)58;
int var_9 = 1871645356;
unsigned short var_11 = (unsigned short)14035;
long long int var_13 = 3657587175816767763LL;
unsigned short var_14 = (unsigned short)50767;
int zero = 0;
long long int var_15 = 3355070711025024577LL;
signed char var_16 = (signed char)37;
short var_17 = (short)-24839;
unsigned long long int var_18 = 1147112635998132277ULL;
int arr_1 [20] [20] ;
_Bool arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 1044563566;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
