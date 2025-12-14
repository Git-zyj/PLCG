#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 900609782669865842LL;
unsigned long long int var_1 = 13484375599447033297ULL;
signed char var_2 = (signed char)33;
unsigned char var_3 = (unsigned char)237;
unsigned short var_4 = (unsigned short)28140;
unsigned char var_5 = (unsigned char)247;
unsigned char var_6 = (unsigned char)38;
signed char var_7 = (signed char)-15;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)201;
unsigned int var_14 = 1968500786U;
unsigned int arr_2 [12] ;
short arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 4065475058U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-13048;
}

void checksum() {
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
