#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)147;
unsigned int var_3 = 1593042120U;
unsigned short var_4 = (unsigned short)47216;
unsigned short var_6 = (unsigned short)8294;
signed char var_7 = (signed char)-117;
unsigned char var_10 = (unsigned char)89;
unsigned char var_11 = (unsigned char)121;
unsigned int var_12 = 2508374658U;
int zero = 0;
int var_13 = 721673587;
short var_14 = (short)25264;
long long int var_15 = -6738005405144744212LL;
long long int var_16 = -8842565023028264983LL;
long long int var_17 = -5116617298064546LL;
long long int arr_0 [25] ;
unsigned char arr_1 [25] [25] ;
unsigned short arr_2 [25] [25] ;
long long int arr_3 [25] [25] [25] ;
unsigned int arr_4 [25] ;
long long int arr_5 [25] [25] ;
int arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = -3819475826112857869LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)34126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 3883312098194353419LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 4219113100U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = -1244563077696954760LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = -1864174029;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
