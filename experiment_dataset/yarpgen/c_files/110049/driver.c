#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5455261267196373266LL;
long long int var_3 = -4895225431545136208LL;
int var_8 = -65765453;
int zero = 0;
unsigned char var_11 = (unsigned char)3;
unsigned short var_12 = (unsigned short)41373;
int var_13 = -2089652330;
unsigned int var_14 = 2946150005U;
unsigned short var_15 = (unsigned short)10256;
unsigned long long int var_16 = 3555405486303517787ULL;
int var_17 = -1299568638;
short var_18 = (short)-1446;
long long int var_19 = -3653440265937394933LL;
unsigned short arr_0 [21] ;
unsigned char arr_1 [21] ;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)4894;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = -5366868781802039828LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
