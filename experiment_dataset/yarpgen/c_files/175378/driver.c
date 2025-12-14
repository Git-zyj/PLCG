#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2189205468U;
unsigned int var_1 = 4294585038U;
unsigned int var_4 = 943452393U;
short var_5 = (short)25000;
unsigned char var_7 = (unsigned char)11;
long long int var_9 = -3569488803899523680LL;
short var_12 = (short)21247;
short var_13 = (short)-21096;
int var_14 = 1537414809;
short var_15 = (short)18569;
int zero = 0;
short var_17 = (short)-4026;
short var_18 = (short)6183;
unsigned short var_19 = (unsigned short)53363;
int var_20 = 312578166;
unsigned int var_21 = 2500544736U;
long long int var_22 = -7235066862568376042LL;
unsigned int var_23 = 2553840489U;
unsigned short var_24 = (unsigned short)27032;
int var_25 = -895573894;
int var_26 = 1031748172;
short var_27 = (short)-15186;
unsigned int arr_0 [24] [24] ;
short arr_1 [24] ;
unsigned char arr_2 [24] [24] ;
short arr_3 [24] ;
int arr_4 [24] ;
long long int arr_20 [16] [16] [16] [16] ;
unsigned char arr_7 [24] [24] ;
unsigned short arr_10 [16] ;
int arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 1874848536U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (short)-26820;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)-18152;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -1685543078;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 283988731458372932LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (unsigned short)62529;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = -985904885;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
