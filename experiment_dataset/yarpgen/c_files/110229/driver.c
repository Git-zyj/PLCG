#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4121712057U;
unsigned char var_3 = (unsigned char)254;
unsigned int var_8 = 1352819274U;
unsigned char var_10 = (unsigned char)4;
int var_11 = 770802600;
unsigned int var_16 = 322605903U;
unsigned int var_17 = 163703004U;
int zero = 0;
long long int var_19 = 1490182440719285893LL;
unsigned int var_20 = 1721549295U;
unsigned char var_21 = (unsigned char)188;
int var_22 = -1560525217;
unsigned short var_23 = (unsigned short)52969;
long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -3923587708033197645LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
