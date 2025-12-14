#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)28394;
long long int var_5 = -1603016621306811435LL;
signed char var_9 = (signed char)107;
unsigned short var_17 = (unsigned short)6185;
int zero = 0;
unsigned long long int var_20 = 8473181574519692195ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = 2692619366112649947LL;
unsigned int var_23 = 579756868U;
unsigned short arr_0 [16] ;
unsigned long long int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)42328;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 10120116442237969932ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
