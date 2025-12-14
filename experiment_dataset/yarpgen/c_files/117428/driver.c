#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
signed char var_1 = (signed char)6;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 16914772419328810192ULL;
unsigned int var_6 = 584536132U;
unsigned long long int var_7 = 3366302169240685618ULL;
unsigned short var_8 = (unsigned short)49686;
unsigned char var_9 = (unsigned char)184;
int zero = 0;
short var_10 = (short)31458;
int var_11 = -2119571248;
unsigned char var_12 = (unsigned char)226;
short var_13 = (short)26455;
unsigned short var_14 = (unsigned short)3515;
int var_15 = -1533879166;
long long int var_16 = -2328327332665471555LL;
int var_17 = 1642712850;
unsigned long long int arr_0 [11] [11] ;
_Bool arr_2 [11] ;
long long int arr_3 [14] ;
short arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 12570326824818141145ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -2406910566202299368LL : 6799438861541906478LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (short)24910;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
