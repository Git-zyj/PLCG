#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4005570194U;
signed char var_6 = (signed char)-113;
int var_7 = 647043969;
short var_8 = (short)14357;
long long int var_15 = 1748279400712144172LL;
signed char var_16 = (signed char)-109;
long long int var_17 = -5693529223459641863LL;
unsigned int var_18 = 4126327563U;
int zero = 0;
unsigned char var_19 = (unsigned char)119;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)58206;
signed char var_22 = (signed char)114;
signed char arr_0 [20] ;
_Bool arr_1 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
