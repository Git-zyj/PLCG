#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7440136576039163269LL;
unsigned int var_2 = 2841818036U;
signed char var_3 = (signed char)-58;
unsigned short var_4 = (unsigned short)37862;
long long int var_5 = -711780118812477595LL;
int var_6 = 1732341789;
unsigned int var_12 = 451000539U;
signed char var_14 = (signed char)-54;
unsigned int var_16 = 486651355U;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-74;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)21;
unsigned int var_22 = 4009650851U;
unsigned char arr_3 [10] [10] ;
unsigned char arr_4 [10] ;
unsigned char arr_8 [23] ;
unsigned char arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)149;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
