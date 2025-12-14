#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)79;
long long int var_2 = 8753221991780344670LL;
unsigned int var_5 = 2239792170U;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)35832;
short var_12 = (short)-24028;
unsigned int var_13 = 4202107914U;
short var_14 = (short)9719;
int var_15 = 1142099915;
int zero = 0;
unsigned short var_20 = (unsigned short)15389;
unsigned long long int var_21 = 10024385506375000977ULL;
signed char var_22 = (signed char)53;
signed char var_23 = (signed char)121;
short var_24 = (short)29439;
long long int var_25 = 7512790646322553266LL;
long long int arr_0 [10] [10] ;
unsigned char arr_1 [10] ;
long long int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -4501023234049186345LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = -3745915572129860782LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
