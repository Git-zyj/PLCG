#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6836167975975629499LL;
long long int var_5 = -2826974762191707680LL;
signed char var_9 = (signed char)-100;
signed char var_12 = (signed char)-84;
int zero = 0;
short var_14 = (short)18323;
unsigned int var_15 = 19422147U;
int var_16 = -724289494;
unsigned short var_17 = (unsigned short)40218;
long long int var_18 = 8697476472573970244LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 768066836U;
unsigned short var_21 = (unsigned short)3302;
unsigned int var_22 = 4113560922U;
long long int arr_1 [12] ;
_Bool arr_2 [12] ;
signed char arr_3 [23] ;
signed char arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -6828476601623797976LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (signed char)127;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
