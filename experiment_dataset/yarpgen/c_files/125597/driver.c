#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3040905111U;
int var_8 = 187760536;
long long int var_12 = -1040474619694710242LL;
int zero = 0;
unsigned int var_13 = 3188141633U;
short var_14 = (short)-16779;
unsigned short var_15 = (unsigned short)42041;
signed char var_16 = (signed char)42;
unsigned long long int var_17 = 13305079914565641832ULL;
int arr_0 [16] ;
unsigned char arr_1 [16] [16] ;
short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = -1525572270;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)102;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)-13223;
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
