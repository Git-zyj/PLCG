#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13366316930652551539ULL;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)149;
unsigned int var_4 = 3806270447U;
unsigned int var_6 = 3618751078U;
short var_8 = (short)16740;
unsigned int var_11 = 65835149U;
_Bool var_12 = (_Bool)0;
unsigned int var_14 = 4257702265U;
int zero = 0;
long long int var_16 = -1504749337651509648LL;
short var_17 = (short)868;
unsigned long long int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 8402009690916845855ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
