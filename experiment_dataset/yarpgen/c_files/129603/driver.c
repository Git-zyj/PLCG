#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15923723079058119725ULL;
unsigned int var_4 = 3563047985U;
unsigned char var_6 = (unsigned char)159;
unsigned int var_7 = 3814016952U;
unsigned long long int var_10 = 12573593551330113974ULL;
int zero = 0;
unsigned int var_12 = 121508081U;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 6082539185135813029ULL;
int var_15 = 1825957178;
unsigned char var_16 = (unsigned char)47;
unsigned long long int var_17 = 4713569659281771463ULL;
short arr_10 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-29036 : (short)2516;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
