#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18138;
unsigned long long int var_5 = 1126366119819006305ULL;
unsigned short var_8 = (unsigned short)3767;
unsigned int var_9 = 2435222544U;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 2465121707055868567ULL;
short var_16 = (short)-24007;
short var_17 = (short)-11194;
_Bool arr_2 [22] ;
unsigned long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = 1074046320325091754ULL;
}

void checksum() {
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
