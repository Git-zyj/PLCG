#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 653791772;
unsigned short var_3 = (unsigned short)22600;
long long int var_5 = -7189021410949417150LL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)6517;
int zero = 0;
short var_12 = (short)-12143;
short var_13 = (short)-13136;
_Bool var_14 = (_Bool)0;
long long int arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -88569718208912358LL : -3350662524907035273LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
