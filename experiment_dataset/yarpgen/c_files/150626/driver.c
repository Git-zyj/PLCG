#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = -6542191458827017249LL;
unsigned long long int var_7 = 8483355087675787164ULL;
long long int var_10 = -7816804789576096529LL;
int zero = 0;
long long int var_13 = -6489680727276291366LL;
unsigned int var_14 = 87086048U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-12921;
unsigned long long int var_17 = 5967172059199140124ULL;
unsigned int arr_2 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 2869831330U : 2650731190U;
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
