#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 349113633;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)56712;
signed char var_7 = (signed char)-113;
unsigned int var_9 = 317813356U;
unsigned char var_10 = (unsigned char)221;
long long int var_13 = -7863948806752087954LL;
short var_14 = (short)31526;
signed char var_17 = (signed char)-4;
int zero = 0;
signed char var_20 = (signed char)-63;
unsigned int var_21 = 1787107047U;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 1829746664U;
long long int var_24 = -7112231401001540034LL;
unsigned long long int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 8154839050738245523ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
