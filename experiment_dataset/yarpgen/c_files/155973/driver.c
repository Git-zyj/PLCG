#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 742814916;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 6414539961112974504ULL;
int zero = 0;
long long int var_10 = -559302279346636368LL;
unsigned char var_11 = (unsigned char)103;
unsigned int var_12 = 3102227511U;
unsigned short var_13 = (unsigned short)20398;
unsigned int arr_0 [17] ;
unsigned char arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1303844058U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)134;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
