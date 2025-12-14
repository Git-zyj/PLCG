#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_2 = (signed char)77;
int var_5 = -658712074;
short var_13 = (short)21645;
unsigned short var_16 = (unsigned short)25279;
short var_19 = (short)665;
int zero = 0;
long long int var_20 = 3682518708496650209LL;
unsigned long long int var_21 = 7225837584939715800ULL;
int var_22 = -1891426447;
unsigned long long int var_23 = 12539698978597619278ULL;
int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -821979971;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
