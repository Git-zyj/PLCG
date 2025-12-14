#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-121;
signed char var_3 = (signed char)-21;
unsigned int var_13 = 229188067U;
signed char var_14 = (signed char)40;
int zero = 0;
unsigned short var_17 = (unsigned short)24191;
unsigned char var_18 = (unsigned char)67;
short var_19 = (short)29862;
unsigned char var_20 = (unsigned char)166;
unsigned char var_21 = (unsigned char)199;
unsigned short var_22 = (unsigned short)59688;
unsigned char arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)200;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
