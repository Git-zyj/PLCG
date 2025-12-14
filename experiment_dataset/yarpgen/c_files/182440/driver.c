#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)862;
long long int var_2 = 8260845754210893304LL;
unsigned char var_3 = (unsigned char)39;
unsigned int var_5 = 2433029720U;
signed char var_9 = (signed char)20;
int zero = 0;
long long int var_10 = 3428917782056267850LL;
unsigned char var_11 = (unsigned char)103;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)75;
signed char arr_1 [11] ;
_Bool arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
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
