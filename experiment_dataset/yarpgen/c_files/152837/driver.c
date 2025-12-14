#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-22132;
_Bool var_7 = (_Bool)1;
unsigned int var_13 = 2263705090U;
int zero = 0;
short var_14 = (short)-24828;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 629262066U;
int var_17 = 1102896342;
unsigned short var_18 = (unsigned short)44143;
unsigned long long int var_19 = 7728149601318254047ULL;
short var_20 = (short)-11256;
unsigned int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 3582675194U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
