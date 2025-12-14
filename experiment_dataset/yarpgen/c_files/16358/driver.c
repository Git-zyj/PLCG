#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 10510946127106269036ULL;
short var_3 = (short)-3389;
int var_4 = -647189336;
_Bool var_6 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)11;
unsigned char var_11 = (unsigned char)91;
signed char var_12 = (signed char)25;
unsigned long long int var_13 = 16089311054085908191ULL;
long long int var_14 = -8122077690159796427LL;
unsigned char var_15 = (unsigned char)99;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -8862376813742192052LL : -8411300636314909887LL;
}

void checksum() {
    hash(&seed, var_10);
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
