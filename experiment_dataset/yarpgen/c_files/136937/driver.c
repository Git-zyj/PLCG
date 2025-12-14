#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)27317;
unsigned char var_3 = (unsigned char)230;
int var_6 = 601830306;
long long int var_11 = -3489532360231082509LL;
unsigned short var_15 = (unsigned short)13206;
int zero = 0;
_Bool var_16 = (_Bool)1;
int var_17 = -1329446895;
_Bool var_18 = (_Bool)0;
long long int var_19 = -7044552091038154679LL;
unsigned int var_20 = 1117380559U;
short var_21 = (short)24447;
long long int arr_1 [19] ;
short arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 1086470151367229321LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)28702;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
