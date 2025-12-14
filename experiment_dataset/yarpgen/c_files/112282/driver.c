#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)18;
unsigned long long int var_3 = 16181077472532980441ULL;
unsigned long long int var_4 = 18370500651145772092ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 16348596982928110177ULL;
unsigned int var_10 = 796151317U;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_19 = (short)14342;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-92;
long long int var_22 = 6609512585152110684LL;
short var_23 = (short)7033;
_Bool var_24 = (_Bool)1;
unsigned int arr_0 [10] ;
unsigned char arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 4285145711U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)80;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
