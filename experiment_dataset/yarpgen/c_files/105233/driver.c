#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5007;
unsigned short var_3 = (unsigned short)53890;
unsigned short var_9 = (unsigned short)52907;
unsigned int var_11 = 3066978536U;
int var_12 = 346041212;
int zero = 0;
unsigned int var_14 = 2096799684U;
unsigned char var_15 = (unsigned char)240;
_Bool var_16 = (_Bool)1;
long long int var_17 = -8062043363324433528LL;
unsigned int var_18 = 3779064636U;
unsigned char var_19 = (unsigned char)41;
unsigned long long int arr_1 [10] ;
unsigned int arr_2 [10] ;
unsigned short arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 5093679005621861840ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1782586271U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)45238;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
