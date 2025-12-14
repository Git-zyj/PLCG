#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2623138026U;
int var_2 = 1261459472;
int var_4 = 1990213757;
unsigned int var_5 = 1831048282U;
unsigned long long int var_14 = 17587755564214915746ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)91;
unsigned long long int var_18 = 17749214934062470143ULL;
unsigned int var_19 = 3555537973U;
long long int var_20 = 4445934195122005501LL;
int var_21 = 1505811407;
unsigned short var_22 = (unsigned short)60808;
unsigned char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)147;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
