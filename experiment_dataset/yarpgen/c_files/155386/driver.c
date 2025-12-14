#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1906591500;
unsigned int var_3 = 998997100U;
_Bool var_9 = (_Bool)1;
int var_11 = -2031761033;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 2501292932U;
unsigned char var_17 = (unsigned char)245;
int zero = 0;
unsigned short var_18 = (unsigned short)44177;
short var_19 = (short)31203;
short var_20 = (short)30374;
unsigned char var_21 = (unsigned char)184;
unsigned int arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 4109299818U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
