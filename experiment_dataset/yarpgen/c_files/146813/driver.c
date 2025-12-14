#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)29760;
unsigned int var_4 = 3863733218U;
short var_6 = (short)-30385;
unsigned long long int var_10 = 8628490160902059914ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)4927;
short var_14 = (short)32742;
signed char var_15 = (signed char)-63;
unsigned int var_16 = 1527527281U;
short arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)-6190;
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
