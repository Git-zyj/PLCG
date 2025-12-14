#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2661189998U;
int var_2 = 1914894773;
unsigned short var_3 = (unsigned short)33062;
signed char var_6 = (signed char)-68;
short var_7 = (short)-23550;
long long int var_15 = -4839366506981876046LL;
unsigned long long int var_16 = 9528208266527527045ULL;
int zero = 0;
unsigned long long int var_19 = 14674675258020040559ULL;
short var_20 = (short)2161;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 18205413958395042197ULL;
unsigned char var_23 = (unsigned char)8;
unsigned int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2589363106U;
}

void checksum() {
    hash(&seed, var_19);
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
