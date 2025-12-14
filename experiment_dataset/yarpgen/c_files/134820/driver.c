#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 989079998U;
unsigned int var_2 = 1096975161U;
unsigned char var_3 = (unsigned char)155;
int var_4 = -1659511759;
signed char var_5 = (signed char)94;
unsigned char var_6 = (unsigned char)130;
int var_7 = -1476944349;
unsigned char var_9 = (unsigned char)111;
unsigned char var_10 = (unsigned char)246;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 3656933189U;
int var_13 = 1073854196;
unsigned int var_14 = 1630519759U;
long long int arr_0 [25] [25] ;
short arr_1 [25] ;
_Bool arr_2 [25] ;
int arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -1126451368645272439LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (short)29565;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 117535086;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
