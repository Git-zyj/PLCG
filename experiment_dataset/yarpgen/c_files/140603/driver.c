#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
long long int var_1 = 443794674103538813LL;
unsigned char var_3 = (unsigned char)203;
unsigned long long int var_5 = 7430821372124037440ULL;
short var_7 = (short)-4590;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)121;
short var_11 = (short)-6793;
int zero = 0;
unsigned short var_12 = (unsigned short)36484;
signed char var_13 = (signed char)14;
int var_14 = 1386916974;
signed char var_15 = (signed char)3;
long long int var_16 = -9198146132646347435LL;
long long int var_17 = -574634208314568940LL;
signed char arr_1 [23] ;
signed char arr_2 [23] ;
unsigned int arr_4 [23] ;
signed char arr_6 [23] ;
long long int arr_7 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)60;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 1338371495U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (signed char)61;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -999121009988930402LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
