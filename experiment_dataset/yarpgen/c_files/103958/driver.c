#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)71;
unsigned int var_2 = 709382179U;
long long int var_3 = 5796576744272766165LL;
unsigned char var_4 = (unsigned char)13;
int var_6 = -209682227;
long long int var_8 = -2486998730843680334LL;
signed char var_9 = (signed char)19;
unsigned int var_10 = 3126005710U;
unsigned int var_11 = 2056142442U;
short var_12 = (short)19388;
long long int var_13 = 3078963272436926821LL;
int zero = 0;
int var_15 = 1022140956;
signed char var_16 = (signed char)-26;
int var_17 = 1987088142;
signed char var_18 = (signed char)89;
long long int var_19 = -1600073069431364106LL;
unsigned int var_20 = 684072139U;
long long int arr_1 [13] ;
unsigned int arr_2 [13] [13] [13] ;
unsigned short arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 9033590078078155961LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2144013522U : 1929177833U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11112 : (unsigned short)63636;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
