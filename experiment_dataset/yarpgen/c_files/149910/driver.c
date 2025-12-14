#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
long long int var_8 = -5773995143663817882LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 17039929493488349200ULL;
unsigned char var_16 = (unsigned char)130;
signed char var_19 = (signed char)43;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 1199273845U;
unsigned char var_22 = (unsigned char)1;
unsigned char var_23 = (unsigned char)132;
short arr_0 [12] [12] ;
long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-16243;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -58095014424954585LL;
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
