#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -865835291;
int var_6 = 1706262758;
unsigned long long int var_9 = 14520396622191516151ULL;
unsigned long long int var_12 = 16863957285226756897ULL;
unsigned char var_13 = (unsigned char)177;
int var_15 = 207180258;
unsigned short var_16 = (unsigned short)30784;
short var_19 = (short)25770;
int zero = 0;
short var_20 = (short)-12866;
signed char var_21 = (signed char)66;
unsigned int var_22 = 2304946409U;
_Bool var_23 = (_Bool)1;
long long int arr_0 [17] ;
unsigned char arr_1 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -7092279929064733099LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)135 : (unsigned char)76;
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
