#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3726676986375029706LL;
unsigned char var_6 = (unsigned char)70;
unsigned short var_10 = (unsigned short)35497;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)54915;
long long int var_16 = 8599235831793755688LL;
int var_17 = 39568982;
signed char var_18 = (signed char)120;
unsigned char var_19 = (unsigned char)166;
unsigned char arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)192 : (unsigned char)199;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
