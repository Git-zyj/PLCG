#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12506894906067317746ULL;
signed char var_4 = (signed char)115;
unsigned short var_10 = (unsigned short)22092;
unsigned short var_14 = (unsigned short)52019;
unsigned char var_15 = (unsigned char)16;
unsigned int var_16 = 2926964904U;
signed char var_17 = (signed char)5;
unsigned int var_18 = 3272063152U;
int zero = 0;
short var_20 = (short)10324;
signed char var_21 = (signed char)-100;
unsigned short var_22 = (unsigned short)16653;
int var_23 = 956896623;
unsigned short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned short)255;
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
