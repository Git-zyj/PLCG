#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45312;
int var_4 = -1000749103;
unsigned int var_8 = 3460866717U;
int var_12 = -28924473;
int zero = 0;
signed char var_17 = (signed char)-75;
unsigned short var_18 = (unsigned short)11403;
unsigned long long int var_19 = 7700939025699939286ULL;
int var_20 = -449312780;
short var_21 = (short)-25097;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)20566;
unsigned int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3314981526U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
