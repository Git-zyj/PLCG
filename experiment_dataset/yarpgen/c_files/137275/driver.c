#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4473132652316314671ULL;
signed char var_8 = (signed char)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
long long int var_19 = 8991617440656977457LL;
short var_20 = (short)-18302;
int var_21 = -1575070300;
unsigned int var_22 = 3453051066U;
signed char var_23 = (signed char)-30;
long long int arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 550086313993170538LL;
}

void checksum() {
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
