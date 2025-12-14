#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17449604289295461643ULL;
unsigned char var_2 = (unsigned char)207;
unsigned long long int var_4 = 17405805900612077321ULL;
unsigned char var_9 = (unsigned char)26;
unsigned char var_11 = (unsigned char)179;
long long int var_14 = -8852887927657718340LL;
unsigned char var_17 = (unsigned char)149;
int zero = 0;
short var_20 = (short)7111;
unsigned char var_21 = (unsigned char)100;
signed char var_22 = (signed char)-19;
unsigned short var_23 = (unsigned short)2163;
signed char arr_0 [23] ;
short arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (short)16139;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
