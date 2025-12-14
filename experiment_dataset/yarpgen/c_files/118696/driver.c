#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2017957890502545166LL;
int var_2 = -1076324496;
unsigned long long int var_4 = 10013890666699400265ULL;
unsigned long long int var_9 = 1899052013113676334ULL;
unsigned int var_12 = 1471435759U;
int zero = 0;
unsigned int var_13 = 3414523991U;
signed char var_14 = (signed char)-64;
long long int var_15 = 8532974613468347954LL;
unsigned long long int var_16 = 8014927386845096247ULL;
unsigned int var_17 = 3725689132U;
unsigned long long int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 18116239065156831587ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
