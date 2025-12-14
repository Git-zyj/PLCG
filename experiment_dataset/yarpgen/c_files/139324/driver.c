#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2628127462U;
int var_4 = 1784974403;
unsigned long long int var_9 = 9207488382870728854ULL;
int zero = 0;
long long int var_13 = -4421779516159076205LL;
int var_14 = 1596755665;
signed char var_15 = (signed char)94;
unsigned short var_16 = (unsigned short)9977;
signed char arr_0 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)60;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
