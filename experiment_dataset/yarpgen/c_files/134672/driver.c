#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)66;
unsigned short var_10 = (unsigned short)48619;
unsigned long long int var_11 = 7456979857600780664ULL;
unsigned int var_12 = 3459217866U;
unsigned long long int var_14 = 12915106876615730179ULL;
unsigned int var_16 = 3551412446U;
int zero = 0;
unsigned char var_20 = (unsigned char)124;
int var_21 = 98765316;
_Bool var_22 = (_Bool)0;
long long int var_23 = -7871975326150148308LL;
unsigned long long int arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = 14923185265655691460ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
