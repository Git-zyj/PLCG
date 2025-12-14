#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)130;
signed char var_1 = (signed char)101;
unsigned char var_2 = (unsigned char)59;
long long int var_5 = -8570169656421834118LL;
unsigned char var_6 = (unsigned char)232;
short var_11 = (short)22967;
int zero = 0;
unsigned long long int var_13 = 9760975279202742177ULL;
signed char var_14 = (signed char)80;
unsigned int var_15 = 1037978073U;
unsigned char var_16 = (unsigned char)27;
unsigned char var_17 = (unsigned char)62;
signed char arr_2 [16] ;
signed char arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (signed char)65;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
