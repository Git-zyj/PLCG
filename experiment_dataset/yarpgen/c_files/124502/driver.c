#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -722141798943605265LL;
short var_1 = (short)10237;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 5284638949530725135ULL;
signed char var_4 = (signed char)-69;
unsigned char var_5 = (unsigned char)13;
unsigned int var_6 = 973027819U;
unsigned long long int var_7 = 14164235470909944872ULL;
short var_9 = (short)6003;
int var_10 = -502226194;
int zero = 0;
long long int var_11 = -7714502027364132436LL;
int var_12 = 240132143;
unsigned int var_13 = 949783457U;
_Bool var_14 = (_Bool)0;
unsigned short arr_1 [24] [24] ;
unsigned short arr_3 [24] [24] ;
unsigned char arr_5 [24] ;
long long int arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)59388;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)34062;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 8727355490235032453LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
