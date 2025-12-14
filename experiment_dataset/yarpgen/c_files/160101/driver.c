#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 1583258027882784372ULL;
short var_6 = (short)-15390;
unsigned long long int var_11 = 11636947590802309314ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 7760391707458434202ULL;
unsigned int var_15 = 194379024U;
short var_18 = (short)-18381;
unsigned char var_19 = (unsigned char)25;
int zero = 0;
signed char var_20 = (signed char)10;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-14501;
unsigned int var_23 = 123853659U;
unsigned char var_24 = (unsigned char)215;
unsigned long long int arr_1 [19] [19] ;
unsigned char arr_2 [19] [19] [19] ;
unsigned long long int arr_3 [19] [19] [19] ;
_Bool arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 16355577337527772979ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 10310949993614370262ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
