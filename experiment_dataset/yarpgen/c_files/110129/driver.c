#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)40269;
unsigned short var_3 = (unsigned short)48046;
unsigned long long int var_4 = 12922821886654108039ULL;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned long long int var_11 = 11656100569118984097ULL;
long long int var_12 = -7599207570936782051LL;
unsigned long long int var_13 = 17911152897479539579ULL;
signed char var_14 = (signed char)-119;
long long int arr_1 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 4432645988508876656LL;
}

void checksum() {
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
