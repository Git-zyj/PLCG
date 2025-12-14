#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2257067255U;
unsigned long long int var_1 = 11393672303921061877ULL;
signed char var_2 = (signed char)7;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)161;
long long int var_8 = 6612900923688870512LL;
unsigned int var_9 = 2407778976U;
int zero = 0;
signed char var_14 = (signed char)127;
unsigned int var_15 = 2628939907U;
signed char var_16 = (signed char)-104;
int var_17 = 1117013462;
signed char arr_6 [20] ;
unsigned int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 224675971U;
}

void checksum() {
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
