#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42736;
int var_1 = -169693757;
short var_3 = (short)12953;
unsigned long long int var_4 = 6666858254332780473ULL;
signed char var_5 = (signed char)57;
long long int var_7 = 6546137076319267482LL;
unsigned short var_8 = (unsigned short)43518;
int zero = 0;
int var_10 = 1209310283;
unsigned char var_11 = (unsigned char)174;
unsigned int var_12 = 4212542343U;
signed char var_13 = (signed char)-68;
int arr_0 [10] [10] ;
short arr_1 [10] [10] ;
signed char arr_4 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 1720679039;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-28192;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)32;
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
