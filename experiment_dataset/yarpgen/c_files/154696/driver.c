#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-17116;
unsigned char var_12 = (unsigned char)239;
unsigned char var_17 = (unsigned char)239;
int zero = 0;
unsigned char var_18 = (unsigned char)120;
unsigned int var_19 = 2030932744U;
unsigned int var_20 = 757869869U;
unsigned short var_21 = (unsigned short)3974;
unsigned char var_22 = (unsigned char)10;
unsigned int var_23 = 2397248291U;
long long int arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -8390307636690054033LL;
}

void checksum() {
    hash(&seed, var_18);
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
