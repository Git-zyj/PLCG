#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)8221;
unsigned short var_4 = (unsigned short)39953;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)57124;
int zero = 0;
unsigned long long int var_12 = 9448517820182417411ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 399002939U;
unsigned int var_15 = 402818223U;
unsigned int var_16 = 4258758104U;
long long int arr_0 [24] ;
unsigned long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 5408166874763031998LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2780801479466682846ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
