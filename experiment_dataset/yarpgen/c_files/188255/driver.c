#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)152;
unsigned int var_5 = 1454645830U;
unsigned char var_7 = (unsigned char)124;
unsigned char var_12 = (unsigned char)69;
int zero = 0;
short var_14 = (short)27304;
short var_15 = (short)-32658;
unsigned int var_16 = 4080632708U;
short var_17 = (short)699;
long long int var_18 = 9164266287849408375LL;
unsigned int arr_0 [25] ;
unsigned char arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1073481220U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)242;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
