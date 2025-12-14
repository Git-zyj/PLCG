#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14038;
unsigned short var_5 = (unsigned short)15137;
int var_9 = 1070573353;
long long int var_14 = 6304638825805673196LL;
int zero = 0;
unsigned long long int var_15 = 11688944283356755323ULL;
unsigned int var_16 = 2845470770U;
unsigned long long int var_17 = 11145315702889193448ULL;
unsigned int var_18 = 1746095472U;
int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 980699296;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
