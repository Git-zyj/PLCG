#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14746715481502701954ULL;
unsigned long long int var_1 = 9678655390009745318ULL;
unsigned short var_3 = (unsigned short)61826;
unsigned long long int var_12 = 12232048854969111361ULL;
unsigned int var_13 = 4083216674U;
unsigned int var_15 = 2834349392U;
unsigned char var_16 = (unsigned char)154;
unsigned long long int var_17 = 9339910305303243393ULL;
int zero = 0;
unsigned long long int var_19 = 4720014029034407400ULL;
unsigned char var_20 = (unsigned char)71;
unsigned int arr_3 [23] [23] ;
_Bool arr_4 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 2544941863U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
