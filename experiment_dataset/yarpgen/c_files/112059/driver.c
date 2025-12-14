#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14757149580737963231ULL;
signed char var_2 = (signed char)111;
int var_3 = -385140504;
signed char var_7 = (signed char)-110;
unsigned long long int var_8 = 2216149433605584111ULL;
signed char var_11 = (signed char)106;
unsigned char var_12 = (unsigned char)36;
int zero = 0;
unsigned int var_13 = 4275494975U;
unsigned int var_14 = 1936072069U;
int var_15 = 105437737;
int var_16 = 1622876478;
unsigned char arr_2 [25] ;
signed char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)-24;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
