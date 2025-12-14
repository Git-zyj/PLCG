#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-58;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)246;
unsigned short var_5 = (unsigned short)46007;
int var_9 = -1210155132;
_Bool var_10 = (_Bool)0;
int var_11 = -915139843;
unsigned int var_12 = 1293316072U;
unsigned char var_13 = (unsigned char)24;
unsigned char var_14 = (unsigned char)196;
int zero = 0;
unsigned short var_15 = (unsigned short)48448;
long long int var_16 = 1932525827838740553LL;
long long int var_17 = 3648947415682122425LL;
int var_18 = -217143056;
unsigned char var_19 = (unsigned char)57;
unsigned int var_20 = 3130230549U;
unsigned int var_21 = 3994588182U;
unsigned int var_22 = 2458622624U;
unsigned short arr_0 [13] ;
long long int arr_1 [13] ;
short arr_3 [20] [20] ;
unsigned int arr_4 [20] [20] ;
signed char arr_2 [13] ;
unsigned char arr_5 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)21753;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1159581086888935692LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-7127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 2975241506U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)207;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
