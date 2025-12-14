#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11018;
unsigned short var_2 = (unsigned short)11545;
signed char var_4 = (signed char)46;
_Bool var_5 = (_Bool)0;
long long int var_6 = -6286513934343753995LL;
unsigned short var_7 = (unsigned short)58928;
long long int var_9 = -8059577473421101429LL;
int zero = 0;
unsigned short var_10 = (unsigned short)14196;
unsigned char var_11 = (unsigned char)244;
signed char var_12 = (signed char)5;
signed char var_13 = (signed char)-64;
unsigned short arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
long long int arr_2 [15] [15] ;
int arr_4 [15] [15] ;
long long int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)6696;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 10951027759952181232ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -2373887093914695098LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -1709019581;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -209815975803098395LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
