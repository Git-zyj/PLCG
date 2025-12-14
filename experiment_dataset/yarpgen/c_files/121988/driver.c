#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)1407;
signed char var_4 = (signed char)-17;
signed char var_5 = (signed char)107;
long long int var_7 = 7932182663512533574LL;
long long int var_10 = -6328381916941424655LL;
int zero = 0;
long long int var_14 = -1594912342008061188LL;
short var_15 = (short)15114;
unsigned short var_16 = (unsigned short)45491;
unsigned short var_17 = (unsigned short)24477;
unsigned short var_18 = (unsigned short)45598;
signed char arr_0 [24] ;
unsigned short arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)33345;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
