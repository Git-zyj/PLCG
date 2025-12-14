#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-111;
unsigned char var_7 = (unsigned char)181;
unsigned int var_9 = 3786523943U;
_Bool var_10 = (_Bool)1;
long long int var_11 = -4503221913921998397LL;
signed char var_12 = (signed char)-72;
int zero = 0;
signed char var_13 = (signed char)111;
long long int var_14 = 6355982703182082415LL;
unsigned int var_15 = 1075653064U;
unsigned long long int var_16 = 12144301441502640485ULL;
unsigned char arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)200;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
