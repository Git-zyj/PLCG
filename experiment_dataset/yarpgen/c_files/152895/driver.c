#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4796;
signed char var_2 = (signed char)-1;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7000308592442119489ULL;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)3955;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned short var_11 = (unsigned short)59101;
int zero = 0;
int var_12 = -285939020;
int var_13 = -1137810570;
short var_14 = (short)-2294;
signed char var_15 = (signed char)71;
signed char var_16 = (signed char)-30;
signed char var_17 = (signed char)-57;
_Bool arr_0 [22] ;
signed char arr_1 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-4;
}

void checksum() {
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
