#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 928838580522483461ULL;
int var_1 = -1745165226;
unsigned short var_2 = (unsigned short)44778;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)35225;
unsigned long long int var_5 = 12404607105157193242ULL;
short var_6 = (short)15708;
unsigned long long int var_8 = 18005284987903568523ULL;
short var_9 = (short)-20883;
unsigned long long int var_10 = 14577170049826011240ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)7640;
unsigned short var_12 = (unsigned short)19296;
unsigned int var_13 = 2425282841U;
unsigned long long int var_14 = 10741681456985450302ULL;
unsigned long long int var_15 = 14930257315973172595ULL;
unsigned char var_16 = (unsigned char)233;
signed char arr_1 [10] ;
_Bool arr_6 [16] ;
unsigned long long int arr_9 [16] ;
long long int arr_5 [10] [10] ;
_Bool arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 6969499776995523514ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? -2294731796428212166LL : -3850727401909502481LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
