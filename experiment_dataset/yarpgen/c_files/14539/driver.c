#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9275144243977004375ULL;
signed char var_13 = (signed char)16;
unsigned char var_16 = (unsigned char)50;
int zero = 0;
signed char var_18 = (signed char)-58;
long long int var_19 = 3549725199013939653LL;
short var_20 = (short)6935;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)65;
unsigned int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1002174562U;
}

void checksum() {
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
