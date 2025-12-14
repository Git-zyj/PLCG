#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1996525811U;
int var_3 = -981246812;
unsigned long long int var_5 = 17133975017876261986ULL;
unsigned char var_6 = (unsigned char)60;
short var_8 = (short)-20614;
int zero = 0;
signed char var_10 = (signed char)-47;
int var_11 = 403958059;
unsigned long long int var_12 = 6862247693087065599ULL;
unsigned long long int arr_0 [16] [16] ;
unsigned char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 4742585618154584289ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)105;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
