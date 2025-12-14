#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 192410057;
unsigned short var_4 = (unsigned short)6302;
_Bool var_7 = (_Bool)1;
long long int var_8 = 2365297733398476129LL;
long long int var_9 = -2485844217499851023LL;
int zero = 0;
int var_14 = 944543370;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 9622983372320587119ULL;
unsigned char arr_2 [13] [13] ;
signed char arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)11;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (signed char)26;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
