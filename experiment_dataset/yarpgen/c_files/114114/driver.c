#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49278;
short var_2 = (short)11572;
unsigned short var_4 = (unsigned short)17576;
short var_5 = (short)-23290;
unsigned long long int var_9 = 12563906201419587168ULL;
unsigned short var_10 = (unsigned short)38293;
unsigned long long int var_18 = 12566233058584407430ULL;
int zero = 0;
signed char var_19 = (signed char)63;
unsigned short var_20 = (unsigned short)15739;
unsigned int var_21 = 4058419731U;
unsigned int var_22 = 1283686694U;
long long int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -2234234367893585464LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
