#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1487390574U;
long long int var_3 = -6508221677204247834LL;
unsigned int var_7 = 925388430U;
unsigned int var_11 = 2429654991U;
int zero = 0;
unsigned short var_16 = (unsigned short)53824;
unsigned int var_17 = 1252472601U;
short var_18 = (short)-4169;
unsigned int var_19 = 1531986794U;
short var_20 = (short)16958;
long long int var_21 = -3576853945254932296LL;
unsigned short var_22 = (unsigned short)23735;
signed char arr_3 [10] [10] ;
unsigned short arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43227 : (unsigned short)65227;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
