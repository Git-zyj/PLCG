#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1103727619;
unsigned short var_4 = (unsigned short)64250;
unsigned int var_6 = 513822692U;
_Bool var_8 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)33865;
_Bool var_12 = (_Bool)1;
int arr_0 [21] ;
int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = -487667941;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = -393763006;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
