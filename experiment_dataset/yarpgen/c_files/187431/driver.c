#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8025493432232991947LL;
signed char var_3 = (signed char)-121;
int var_9 = 621121111;
unsigned char var_12 = (unsigned char)32;
int zero = 0;
short var_14 = (short)4958;
short var_15 = (short)4898;
long long int var_16 = -2353418754611409092LL;
unsigned short var_17 = (unsigned short)50536;
unsigned short var_18 = (unsigned short)53004;
_Bool var_19 = (_Bool)1;
short arr_0 [21] [21] ;
int arr_1 [21] ;
short arr_2 [21] [21] [21] ;
unsigned char arr_8 [21] ;
unsigned long long int arr_9 [21] [21] ;
short arr_13 [14] ;
unsigned int arr_15 [14] [14] ;
unsigned int arr_22 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-75;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 2128956410;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (short)32566;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 8795215432139077627ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_13 [i_0] = (short)30698;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? 2126149480U : 1765185730U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 2815761684U;
}

void checksum() {
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
