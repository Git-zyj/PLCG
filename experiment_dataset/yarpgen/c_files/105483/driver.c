#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63771;
long long int var_5 = 3386093990494456945LL;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)231;
unsigned long long int var_15 = 6749499630553769337ULL;
signed char var_17 = (signed char)-67;
int zero = 0;
unsigned char var_19 = (unsigned char)225;
_Bool var_20 = (_Bool)0;
long long int var_21 = -7772172962449902863LL;
signed char arr_2 [23] [23] ;
_Bool arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
