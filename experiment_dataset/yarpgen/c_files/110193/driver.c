#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = -6493313196147792514LL;
short var_5 = (short)31845;
unsigned short var_6 = (unsigned short)52747;
unsigned short var_7 = (unsigned short)5787;
int var_9 = -2117409160;
unsigned short var_14 = (unsigned short)17671;
long long int var_15 = 6458894682214277442LL;
unsigned int var_18 = 3191061565U;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)13292;
_Bool var_21 = (_Bool)1;
int var_22 = 232334756;
unsigned short var_23 = (unsigned short)46211;
unsigned short var_24 = (unsigned short)54903;
unsigned short var_25 = (unsigned short)35297;
_Bool var_26 = (_Bool)0;
long long int arr_0 [25] ;
int arr_3 [25] [25] ;
unsigned int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 6719436884672993015LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 1861555246;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 660544444U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
