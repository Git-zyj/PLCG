#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -74271613;
unsigned short var_11 = (unsigned short)57775;
signed char var_14 = (signed char)19;
unsigned int var_16 = 1760254178U;
int zero = 0;
signed char var_19 = (signed char)-98;
unsigned long long int var_20 = 13372641966530341569ULL;
signed char var_21 = (signed char)-67;
long long int var_22 = 6897148721430413959LL;
unsigned short var_23 = (unsigned short)31053;
unsigned short var_24 = (unsigned short)22794;
long long int arr_0 [25] [25] ;
long long int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 1872701366793110194LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -8347606184596560731LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
