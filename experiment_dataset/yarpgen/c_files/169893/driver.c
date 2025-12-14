#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 1022402997U;
long long int var_8 = -1733683518011075051LL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)40215;
int zero = 0;
int var_11 = -2012319922;
signed char var_12 = (signed char)98;
int var_13 = 1845884154;
_Bool var_14 = (_Bool)0;
long long int var_15 = 3496254592172818280LL;
int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -304763502;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
