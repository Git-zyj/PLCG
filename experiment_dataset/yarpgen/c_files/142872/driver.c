#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -784692598;
_Bool var_1 = (_Bool)0;
unsigned long long int var_5 = 13557534614211972939ULL;
unsigned long long int var_6 = 11345467188411059469ULL;
short var_7 = (short)25689;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 1826451256U;
unsigned char var_11 = (unsigned char)126;
int zero = 0;
signed char var_12 = (signed char)75;
unsigned int var_13 = 2608239317U;
unsigned long long int var_14 = 5438922224823417649ULL;
long long int var_15 = -1628911294688935028LL;
unsigned char var_16 = (unsigned char)171;
unsigned long long int var_17 = 2309007620124017902ULL;
signed char var_18 = (signed char)-76;
long long int arr_0 [16] [16] ;
unsigned int arr_1 [16] ;
unsigned long long int arr_2 [16] [16] ;
long long int arr_3 [16] [16] ;
int arr_9 [16] [16] ;
int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -5089177564292155454LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 325954463U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 3138291127505616693ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -5408654269466201987LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = -1418520995;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -1401691447;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
