#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26146;
unsigned int var_2 = 27043072U;
long long int var_4 = -2923054128649303504LL;
long long int var_7 = 8118106271533766572LL;
long long int var_9 = 6763180195788604057LL;
int var_12 = 2082590132;
unsigned char var_15 = (unsigned char)219;
int zero = 0;
unsigned int var_16 = 3936350952U;
short var_17 = (short)-5359;
unsigned short var_18 = (unsigned short)21705;
short var_19 = (short)-12094;
signed char var_20 = (signed char)103;
long long int arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -8161787899941951364LL : 2204218156671046608LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
