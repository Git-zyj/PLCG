#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)27;
long long int var_10 = 4531246707047137823LL;
_Bool var_11 = (_Bool)0;
unsigned short var_14 = (unsigned short)46077;
unsigned char var_16 = (unsigned char)87;
int zero = 0;
short var_17 = (short)-29773;
unsigned short var_18 = (unsigned short)42348;
int var_19 = -2023350026;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
int var_22 = 2137562134;
long long int arr_1 [14] ;
int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -7171172034682176120LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 2081052924;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
