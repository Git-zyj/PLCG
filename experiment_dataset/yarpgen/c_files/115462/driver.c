#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41451;
int var_8 = -1211571327;
signed char var_10 = (signed char)90;
int var_12 = 1194278781;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 4173542033U;
unsigned short var_19 = (unsigned short)35731;
unsigned short var_20 = (unsigned short)35739;
signed char var_21 = (signed char)-69;
unsigned long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4495539109770734748ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
