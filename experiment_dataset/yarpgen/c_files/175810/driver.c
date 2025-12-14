#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -2075103069;
unsigned char var_6 = (unsigned char)227;
signed char var_7 = (signed char)29;
unsigned char var_8 = (unsigned char)61;
unsigned long long int var_9 = 16408140621520439421ULL;
unsigned short var_14 = (unsigned short)44134;
int zero = 0;
long long int var_16 = -117039235730873425LL;
unsigned long long int var_17 = 6420199088132663263ULL;
unsigned short var_18 = (unsigned short)49508;
unsigned long long int arr_0 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 9737265112077551872ULL;
}

void checksum() {
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
