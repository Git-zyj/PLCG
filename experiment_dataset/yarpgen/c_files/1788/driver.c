#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 2118157736;
unsigned char var_5 = (unsigned char)33;
long long int var_8 = -1229852839296686523LL;
short var_11 = (short)30817;
unsigned long long int var_12 = 13558898238347895803ULL;
long long int var_13 = 1685495902720673162LL;
int zero = 0;
unsigned char var_14 = (unsigned char)205;
unsigned int var_15 = 353117034U;
signed char var_16 = (signed char)-62;
long long int var_17 = 2755018915382411649LL;
long long int var_18 = 6457211814198464083LL;
signed char var_19 = (signed char)-37;
short arr_9 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)-15067;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
