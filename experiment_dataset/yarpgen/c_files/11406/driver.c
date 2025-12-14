#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)-88;
unsigned char var_4 = (unsigned char)63;
unsigned short var_5 = (unsigned short)52122;
unsigned long long int var_6 = 6815094373095280909ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)137;
unsigned char var_11 = (unsigned char)128;
int var_12 = 61048630;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)60782;
unsigned short arr_0 [17] ;
long long int arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)44192;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = -5314080486766826554LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
