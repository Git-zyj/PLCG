#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1605995759;
short var_2 = (short)-21428;
short var_3 = (short)-27083;
signed char var_6 = (signed char)-35;
int zero = 0;
short var_13 = (short)25714;
unsigned short var_14 = (unsigned short)32856;
int var_15 = -912325671;
long long int var_16 = -3048290621310450989LL;
int var_17 = 590766623;
int arr_0 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 1663765442;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
