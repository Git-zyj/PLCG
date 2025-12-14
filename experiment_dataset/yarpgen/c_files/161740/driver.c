#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-18937;
unsigned char var_9 = (unsigned char)80;
signed char var_10 = (signed char)-50;
unsigned long long int var_14 = 7497663196565227461ULL;
int zero = 0;
int var_15 = -982738020;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3772718331U;
short arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (short)27872;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
