#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-23;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)183;
signed char var_4 = (signed char)-81;
unsigned char var_5 = (unsigned char)40;
short var_6 = (short)-30535;
short var_7 = (short)-3405;
short var_8 = (short)11276;
unsigned short var_9 = (unsigned short)48963;
unsigned int var_11 = 1934591894U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)3001;
unsigned long long int var_14 = 5497035496797973566ULL;
unsigned int var_15 = 3071568665U;
short arr_2 [22] [22] ;
long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)18300;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -7652985022856013398LL : -1667064222704479161LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
