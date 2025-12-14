#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3549011912604436541ULL;
unsigned long long int var_6 = 10063369405684719160ULL;
int zero = 0;
unsigned long long int var_10 = 12591098305198213692ULL;
unsigned long long int var_11 = 10009093335093022899ULL;
unsigned long long int var_12 = 12747233996004754218ULL;
unsigned long long int var_13 = 1273658005221877950ULL;
unsigned long long int var_14 = 10974972638163366708ULL;
unsigned long long int arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 7808529205804019304ULL;
}

void checksum() {
    hash(&seed, var_10);
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
