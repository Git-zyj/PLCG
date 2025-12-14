#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)27200;
signed char var_4 = (signed char)48;
unsigned int var_5 = 107557717U;
unsigned short var_6 = (unsigned short)7233;
unsigned int var_7 = 1616262132U;
unsigned short var_10 = (unsigned short)49307;
int var_11 = -1039742019;
short var_12 = (short)4184;
unsigned short var_14 = (unsigned short)30839;
int zero = 0;
unsigned char var_18 = (unsigned char)40;
unsigned short var_19 = (unsigned short)51041;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)46666;
unsigned int var_22 = 3148810511U;
_Bool arr_0 [14] [14] ;
unsigned long long int arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 6170027840805999621ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
