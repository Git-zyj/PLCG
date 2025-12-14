#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1830541810;
unsigned long long int var_4 = 10807179011680136311ULL;
unsigned int var_5 = 2167831175U;
unsigned int var_6 = 316414577U;
signed char var_9 = (signed char)43;
int zero = 0;
long long int var_10 = 7509977415916852358LL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)13003;
unsigned char var_13 = (unsigned char)181;
signed char var_14 = (signed char)95;
signed char var_15 = (signed char)12;
unsigned char arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)219;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
