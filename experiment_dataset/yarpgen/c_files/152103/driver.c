#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5558624304032599582LL;
int var_4 = 1930938394;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3590301703U;
short var_11 = (short)31463;
unsigned char var_13 = (unsigned char)216;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_17 = (short)12209;
unsigned short var_18 = (unsigned short)9784;
unsigned char var_19 = (unsigned char)250;
signed char var_20 = (signed char)-32;
long long int var_21 = 4826606380758966396LL;
short arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (short)2425;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
