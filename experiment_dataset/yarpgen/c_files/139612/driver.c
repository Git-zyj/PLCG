#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 817921051;
int var_3 = -598290952;
signed char var_7 = (signed char)125;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_16 = -428025829;
signed char var_17 = (signed char)-20;
unsigned long long int var_18 = 9304215649436514531ULL;
unsigned char var_19 = (unsigned char)236;
unsigned long long int var_20 = 10971177670179790072ULL;
short arr_6 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (short)-6088;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
