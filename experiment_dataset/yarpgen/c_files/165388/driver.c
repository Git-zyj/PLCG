#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-107;
unsigned char var_3 = (unsigned char)154;
long long int var_4 = -8507966428460256986LL;
unsigned char var_9 = (unsigned char)146;
unsigned char var_11 = (unsigned char)234;
short var_16 = (short)17007;
unsigned char var_18 = (unsigned char)219;
int zero = 0;
long long int var_19 = -4132853668988970215LL;
unsigned int var_20 = 4171828661U;
_Bool var_21 = (_Bool)1;
short arr_0 [24] ;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-9347;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 661184720060561403LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
