#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17636;
unsigned long long int var_1 = 17590706271705110724ULL;
signed char var_2 = (signed char)122;
_Bool var_4 = (_Bool)1;
int zero = 0;
long long int var_11 = 4281407689564686629LL;
long long int var_12 = -1754005258531910622LL;
unsigned char var_13 = (unsigned char)136;
short arr_0 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)1273;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
