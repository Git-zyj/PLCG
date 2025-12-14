#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1557227896579195481ULL;
unsigned long long int var_1 = 10244563415272418802ULL;
int var_3 = 205968445;
long long int var_6 = -2063889235343510736LL;
int var_7 = 1925499092;
int zero = 0;
unsigned char var_12 = (unsigned char)106;
signed char var_13 = (signed char)-10;
unsigned int var_14 = 376529480U;
short var_15 = (short)25223;
unsigned short arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)11056;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
