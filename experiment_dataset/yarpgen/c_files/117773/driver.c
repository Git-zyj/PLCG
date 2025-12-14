#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5029636905174789471LL;
unsigned int var_5 = 732359870U;
int var_6 = 1544196909;
int var_7 = 809357149;
unsigned long long int var_8 = 11126601531336560394ULL;
int zero = 0;
unsigned int var_13 = 3429530356U;
unsigned long long int var_14 = 11913001289038649186ULL;
unsigned long long int var_15 = 8314621788772618225ULL;
signed char var_16 = (signed char)103;
unsigned long long int var_17 = 12903309733732678909ULL;
long long int var_18 = -4777081599402797980LL;
unsigned short var_19 = (unsigned short)14259;
long long int var_20 = 8278802885611642753LL;
unsigned char var_21 = (unsigned char)204;
unsigned int var_22 = 2956511622U;
long long int arr_0 [10] ;
signed char arr_1 [10] [10] ;
short arr_3 [10] ;
unsigned short arr_18 [16] ;
long long int arr_19 [16] ;
_Bool arr_5 [10] ;
unsigned short arr_6 [10] ;
_Bool arr_17 [10] ;
unsigned short arr_20 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -6886436142026859397LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-105;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-652;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_18 [i_0] = (unsigned short)29525;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = 6424143987561391935LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned short)29101;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60162 : (unsigned short)36929;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
