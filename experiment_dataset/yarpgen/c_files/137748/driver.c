#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)80;
short var_5 = (short)-5582;
unsigned short var_7 = (unsigned short)41980;
short var_8 = (short)9012;
unsigned short var_10 = (unsigned short)48535;
int zero = 0;
unsigned short var_16 = (unsigned short)58701;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 16918649676286645533ULL;
unsigned char var_19 = (unsigned char)118;
int arr_1 [15] ;
short arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1427133001;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)-11418;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
