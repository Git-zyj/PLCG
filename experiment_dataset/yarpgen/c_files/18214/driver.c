#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)2;
unsigned short var_3 = (unsigned short)25516;
int var_4 = -801785362;
_Bool var_5 = (_Bool)1;
unsigned char var_6 = (unsigned char)206;
unsigned char var_7 = (unsigned char)244;
int var_8 = 947212124;
unsigned char var_9 = (unsigned char)43;
int zero = 0;
int var_10 = 330520688;
unsigned long long int var_11 = 7197462620956092228ULL;
short var_12 = (short)4835;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)46;
short var_15 = (short)-25105;
unsigned char var_16 = (unsigned char)146;
long long int var_17 = 7185090741284133256LL;
_Bool var_18 = (_Bool)0;
int var_19 = 1296161978;
short arr_1 [12] [12] ;
int arr_2 [12] ;
int arr_6 [12] [12] ;
int arr_13 [15] [15] [15] ;
unsigned short arr_15 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)20953;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1014048364;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = -1438024749;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 411189194 : -2137097093;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)65163;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
