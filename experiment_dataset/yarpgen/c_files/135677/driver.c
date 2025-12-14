#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50401;
_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)30;
long long int var_3 = -5391894809394400901LL;
unsigned short var_5 = (unsigned short)46476;
unsigned int var_8 = 3151181361U;
unsigned short var_10 = (unsigned short)10333;
int zero = 0;
unsigned short var_11 = (unsigned short)52897;
long long int var_12 = -803673261795365745LL;
unsigned short var_13 = (unsigned short)41502;
signed char var_14 = (signed char)70;
int var_15 = -1011811188;
unsigned int var_16 = 2283667024U;
unsigned char arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)162;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
