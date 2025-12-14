#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1473047679U;
signed char var_3 = (signed char)-90;
unsigned char var_6 = (unsigned char)200;
unsigned char var_7 = (unsigned char)92;
short var_9 = (short)3930;
int zero = 0;
unsigned short var_12 = (unsigned short)59546;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)45989;
long long int var_15 = -3396700424120919247LL;
unsigned short var_16 = (unsigned short)24007;
unsigned int arr_0 [11] ;
_Bool arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 3373312804U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
