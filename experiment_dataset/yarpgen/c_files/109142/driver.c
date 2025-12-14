#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62356;
unsigned short var_3 = (unsigned short)64011;
signed char var_4 = (signed char)14;
unsigned short var_7 = (unsigned short)49095;
unsigned short var_8 = (unsigned short)49964;
int zero = 0;
long long int var_19 = 2570665349027941843LL;
short var_20 = (short)-21319;
long long int var_21 = -5329522168617615523LL;
unsigned short var_22 = (unsigned short)539;
short arr_0 [15] ;
int arr_2 [15] ;
short arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-16786;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -565652787;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)22407;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
