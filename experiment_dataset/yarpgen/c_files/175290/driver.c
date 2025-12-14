#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-10407;
unsigned short var_10 = (unsigned short)26149;
short var_11 = (short)1951;
unsigned long long int var_13 = 7381868668772438655ULL;
int zero = 0;
signed char var_15 = (signed char)-105;
long long int var_16 = -9151022605578476642LL;
unsigned short var_17 = (unsigned short)30110;
unsigned int var_18 = 990365780U;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -8314052933597003663LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
