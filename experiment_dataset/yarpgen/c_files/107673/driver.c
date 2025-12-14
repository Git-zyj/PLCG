#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17103;
signed char var_3 = (signed char)127;
signed char var_7 = (signed char)-51;
int var_9 = -505299520;
int zero = 0;
long long int var_10 = -4213358432748087519LL;
unsigned short var_11 = (unsigned short)19614;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)4741;
short var_14 = (short)11688;
long long int var_15 = 4617112211808442868LL;
long long int arr_0 [16] [16] ;
unsigned int arr_3 [16] ;
_Bool arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -6731552863248617304LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 971396447U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
