#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 676275784U;
unsigned char var_2 = (unsigned char)188;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 4695506174821680275ULL;
unsigned long long int var_8 = 3360502288911282228ULL;
short var_10 = (short)27427;
unsigned int var_13 = 1889711751U;
unsigned char var_15 = (unsigned char)54;
int zero = 0;
unsigned int var_17 = 1458949261U;
int var_18 = -1030227086;
unsigned char var_19 = (unsigned char)103;
unsigned long long int arr_0 [10] ;
_Bool arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 17753331488051693018ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
