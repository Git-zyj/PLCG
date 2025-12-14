#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1581334274871616956LL;
unsigned long long int var_9 = 11739548414639921644ULL;
short var_14 = (short)-11322;
int zero = 0;
unsigned char var_17 = (unsigned char)255;
unsigned long long int var_18 = 3320759219603947836ULL;
unsigned char var_19 = (unsigned char)152;
_Bool var_20 = (_Bool)1;
short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)30744;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
