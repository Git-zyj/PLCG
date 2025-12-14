#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5883237424335933218ULL;
short var_4 = (short)21353;
short var_5 = (short)-9847;
long long int var_6 = 6197966321539732886LL;
unsigned long long int var_7 = 16175065928078206791ULL;
int zero = 0;
int var_11 = -107208056;
signed char var_12 = (signed char)-82;
long long int var_13 = -1007415104151367532LL;
short var_14 = (short)-6738;
unsigned char var_15 = (unsigned char)176;
long long int var_16 = -6480103439850470301LL;
long long int arr_0 [17] [17] ;
signed char arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 1709065876834229045LL : 6403906266888839396LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-78;
}

void checksum() {
    hash(&seed, var_11);
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
