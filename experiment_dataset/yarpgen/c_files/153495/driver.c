#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-15262;
unsigned int var_5 = 1745189133U;
unsigned short var_6 = (unsigned short)46610;
short var_8 = (short)24676;
int zero = 0;
int var_11 = 691207054;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 194262883191385098ULL;
long long int var_14 = 7057140820507337984LL;
unsigned long long int var_15 = 12919899172841242454ULL;
long long int arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -5614989363366590039LL;
}

void checksum() {
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
