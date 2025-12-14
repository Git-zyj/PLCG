#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)13215;
signed char var_4 = (signed char)-25;
signed char var_5 = (signed char)111;
short var_7 = (short)-29733;
unsigned char var_8 = (unsigned char)46;
unsigned long long int var_9 = 12305704132563219749ULL;
int zero = 0;
short var_10 = (short)28026;
unsigned long long int var_11 = 6821985995477101221ULL;
long long int var_12 = -2430341072595245154LL;
unsigned long long int var_13 = 12772932695679772050ULL;
unsigned char var_14 = (unsigned char)3;
_Bool arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
