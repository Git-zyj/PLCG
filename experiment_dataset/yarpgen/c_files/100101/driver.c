#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8252167391588003260ULL;
unsigned int var_7 = 2626791957U;
unsigned long long int var_8 = 17265595446194688100ULL;
unsigned char var_9 = (unsigned char)24;
long long int var_15 = -4698697528105638618LL;
int zero = 0;
int var_17 = -734053599;
signed char var_18 = (signed char)61;
unsigned long long int var_19 = 11644585103969956663ULL;
short var_20 = (short)28482;
signed char arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)27;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
