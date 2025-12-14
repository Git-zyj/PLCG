#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 4773462048904449332ULL;
short var_10 = (short)14124;
unsigned long long int var_12 = 5828849900809262638ULL;
int zero = 0;
long long int var_14 = -5153414041304609815LL;
unsigned long long int var_15 = 8270054001161061384ULL;
unsigned long long int var_16 = 12312866162554556022ULL;
signed char var_17 = (signed char)-85;
short arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-16122;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
