#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4719653452350086658LL;
unsigned int var_5 = 256440009U;
unsigned short var_8 = (unsigned short)2367;
unsigned int var_12 = 1401864101U;
unsigned short var_17 = (unsigned short)53463;
int zero = 0;
unsigned short var_19 = (unsigned short)18343;
int var_20 = -2094628000;
signed char var_21 = (signed char)-72;
int var_22 = 1422645813;
short var_23 = (short)18749;
signed char var_24 = (signed char)121;
_Bool arr_10 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
