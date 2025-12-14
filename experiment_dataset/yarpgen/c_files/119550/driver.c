#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6111896357185600343LL;
unsigned int var_7 = 2520641945U;
unsigned long long int var_8 = 1900190595110265875ULL;
unsigned long long int var_9 = 1959770625794214777ULL;
int zero = 0;
signed char var_12 = (signed char)-17;
int var_13 = 1922294227;
int var_14 = 40558879;
unsigned short var_15 = (unsigned short)47978;
unsigned int var_16 = 2028044584U;
unsigned char arr_1 [16] ;
_Bool arr_2 [16] ;
int arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -730303803 : -2139611351;
}

void checksum() {
    hash(&seed, var_12);
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
