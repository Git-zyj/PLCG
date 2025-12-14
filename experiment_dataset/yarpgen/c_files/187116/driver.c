#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
unsigned int var_1 = 452476444U;
signed char var_4 = (signed char)-74;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 3946217748372327833ULL;
unsigned long long int var_9 = 16556931488032414903ULL;
unsigned long long int var_10 = 3474952089984829592ULL;
int zero = 0;
unsigned int var_11 = 3499053348U;
short var_12 = (short)27701;
int var_13 = 1288771328;
unsigned char var_14 = (unsigned char)179;
unsigned int var_15 = 1687718836U;
int var_16 = 713568162;
signed char var_17 = (signed char)72;
unsigned long long int arr_0 [25] ;
int arr_1 [25] ;
_Bool arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 480322997753601449ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -2034398885;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
