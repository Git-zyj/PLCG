#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6250532163510079090LL;
_Bool var_3 = (_Bool)1;
signed char var_6 = (signed char)-50;
unsigned short var_11 = (unsigned short)18533;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)1;
int var_16 = 1170093145;
int var_19 = 1781527912;
int zero = 0;
long long int var_20 = 3688081490558840498LL;
short var_21 = (short)-25260;
unsigned long long int var_22 = 1090991347579909277ULL;
int var_23 = -1821631976;
long long int var_24 = -5811876629393797687LL;
short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)14500;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
