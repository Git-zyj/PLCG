#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1679962758;
unsigned int var_1 = 2950816598U;
long long int var_2 = 6038112316958477399LL;
long long int var_4 = -4802675019646530802LL;
signed char var_5 = (signed char)-31;
unsigned short var_6 = (unsigned short)53680;
unsigned short var_8 = (unsigned short)12813;
int zero = 0;
short var_10 = (short)-27066;
long long int var_11 = 7352322704472193082LL;
signed char var_12 = (signed char)90;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)11138;
int var_15 = 374379303;
_Bool arr_10 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
