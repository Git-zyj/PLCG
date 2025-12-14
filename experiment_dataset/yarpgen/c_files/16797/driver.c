#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 87678134;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 169426690546094488ULL;
unsigned int var_5 = 4043662757U;
_Bool var_7 = (_Bool)1;
int var_8 = -886152588;
int var_12 = -2028944814;
unsigned char var_13 = (unsigned char)14;
unsigned short var_14 = (unsigned short)44293;
int var_16 = 2142313511;
int zero = 0;
unsigned long long int var_17 = 374190678503555260ULL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)91;
_Bool var_20 = (_Bool)0;
int var_21 = 1396966918;
long long int arr_1 [14] ;
signed char arr_9 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -2336471046924295962LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)15 : (signed char)83;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
