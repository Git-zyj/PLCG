#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37830;
unsigned long long int var_8 = 17242890214315009356ULL;
unsigned int var_17 = 2405925171U;
int zero = 0;
unsigned long long int var_19 = 3479861580276162621ULL;
unsigned long long int var_20 = 12036973833176725727ULL;
unsigned short var_21 = (unsigned short)29433;
long long int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -149325087962511027LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
