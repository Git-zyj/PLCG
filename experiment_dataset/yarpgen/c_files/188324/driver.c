#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1182531293;
signed char var_1 = (signed char)-80;
signed char var_3 = (signed char)67;
signed char var_5 = (signed char)-88;
int var_6 = -1854696372;
unsigned long long int var_7 = 4614322983828231645ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)98;
signed char var_11 = (signed char)110;
signed char var_12 = (signed char)37;
signed char arr_0 [16] ;
unsigned char arr_1 [16] ;
int arr_2 [16] ;
int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)216;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 738662801;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 1942944282;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
