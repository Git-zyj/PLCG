#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)1623;
unsigned short var_6 = (unsigned short)31365;
unsigned short var_11 = (unsigned short)53397;
unsigned short var_12 = (unsigned short)14943;
unsigned long long int var_14 = 15514856477739276942ULL;
unsigned short var_16 = (unsigned short)19866;
int zero = 0;
unsigned short var_17 = (unsigned short)2071;
unsigned long long int var_18 = 11494304634171859099ULL;
unsigned long long int var_19 = 13163002104961661499ULL;
unsigned long long int arr_0 [22] ;
unsigned long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 7425182538644450676ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 12653088458108463983ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
