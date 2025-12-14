#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_7 = (signed char)-94;
unsigned long long int var_8 = 1502793741366136008ULL;
short var_10 = (short)-18138;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)104;
signed char var_13 = (signed char)-104;
int zero = 0;
int var_20 = -659988504;
unsigned short var_21 = (unsigned short)50432;
long long int var_22 = 1313820244741755911LL;
unsigned char var_23 = (unsigned char)111;
signed char var_24 = (signed char)-83;
int arr_0 [25] [25] ;
_Bool arr_5 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -759795410;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
