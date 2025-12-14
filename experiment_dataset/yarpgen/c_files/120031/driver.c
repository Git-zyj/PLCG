#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29208;
signed char var_5 = (signed char)122;
short var_7 = (short)-2659;
unsigned char var_8 = (unsigned char)131;
short var_11 = (short)24846;
short var_12 = (short)10394;
int zero = 0;
short var_16 = (short)-19253;
signed char var_17 = (signed char)9;
short var_18 = (short)27529;
short var_19 = (short)-22649;
short var_20 = (short)10494;
signed char arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-113;
}

void checksum() {
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
