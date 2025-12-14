#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45935;
long long int var_4 = -5368250039674995234LL;
int var_8 = 599324235;
long long int var_9 = 4009729814716406180LL;
unsigned int var_10 = 745339100U;
long long int var_12 = 4640156480985945666LL;
int zero = 0;
int var_15 = -2135706981;
long long int var_16 = 3008981055157825503LL;
short var_17 = (short)9568;
_Bool var_18 = (_Bool)0;
long long int arr_2 [14] ;
unsigned short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 650221785223829344LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)37659;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
