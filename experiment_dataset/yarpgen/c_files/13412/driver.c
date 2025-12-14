#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)42;
unsigned char var_1 = (unsigned char)243;
signed char var_3 = (signed char)107;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-9958;
int zero = 0;
unsigned int var_10 = 2382711837U;
unsigned long long int var_11 = 8596970120680234510ULL;
unsigned long long int var_12 = 14938821459809660204ULL;
_Bool var_13 = (_Bool)0;
signed char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)-98;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
