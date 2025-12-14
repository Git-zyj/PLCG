#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7980;
short var_2 = (short)-28944;
_Bool var_3 = (_Bool)1;
short var_4 = (short)-4841;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-45;
unsigned int var_7 = 3345946496U;
unsigned int var_8 = 3849334594U;
unsigned long long int var_10 = 17335387230820378001ULL;
int zero = 0;
unsigned char var_11 = (unsigned char)200;
short var_12 = (short)4891;
unsigned short var_13 = (unsigned short)11310;
_Bool var_14 = (_Bool)0;
_Bool arr_2 [24] ;
_Bool arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
