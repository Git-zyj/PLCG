#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)47;
int var_5 = -2020740413;
signed char var_7 = (signed char)-63;
short var_8 = (short)1236;
signed char var_10 = (signed char)64;
int var_11 = 1519896784;
unsigned char var_12 = (unsigned char)223;
unsigned char var_14 = (unsigned char)191;
short var_15 = (short)14887;
int zero = 0;
signed char var_16 = (signed char)-19;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)239;
int arr_1 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -727181096 : -492678060;
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
