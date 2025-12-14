#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2844665795007895705LL;
signed char var_3 = (signed char)13;
long long int var_4 = -5182828024285942091LL;
_Bool var_7 = (_Bool)1;
int var_8 = 2100192084;
short var_11 = (short)13101;
int zero = 0;
unsigned long long int var_13 = 17822012515517136727ULL;
short var_14 = (short)4679;
long long int var_15 = 842492977501782348LL;
unsigned short var_16 = (unsigned short)61225;
int var_17 = 1743819793;
unsigned int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 490594749U : 3785343892U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
