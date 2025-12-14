#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)54;
int var_5 = 36686231;
int var_6 = -1763991034;
signed char var_8 = (signed char)-7;
unsigned short var_9 = (unsigned short)17800;
int zero = 0;
unsigned char var_11 = (unsigned char)199;
unsigned char var_12 = (unsigned char)93;
int var_13 = -661281105;
unsigned int var_14 = 3635067830U;
unsigned int var_15 = 875987137U;
unsigned char var_16 = (unsigned char)235;
signed char var_17 = (signed char)-106;
long long int arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? -5922834711010815147LL : -358139713609769906LL;
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
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
