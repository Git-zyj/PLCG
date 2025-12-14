#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1803412691;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)41666;
unsigned short var_4 = (unsigned short)59711;
unsigned char var_9 = (unsigned char)32;
unsigned char var_11 = (unsigned char)114;
int zero = 0;
unsigned short var_13 = (unsigned short)35033;
unsigned char var_14 = (unsigned char)200;
long long int var_15 = -5325786588063938319LL;
unsigned short var_16 = (unsigned short)1150;
unsigned short var_17 = (unsigned short)28480;
signed char arr_0 [19] [19] ;
unsigned short arr_1 [19] ;
short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)12097;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)29275;
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
