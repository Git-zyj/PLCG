#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
long long int var_1 = 1778389782859104323LL;
long long int var_2 = -9146107465004670064LL;
unsigned char var_3 = (unsigned char)109;
signed char var_5 = (signed char)119;
long long int var_6 = 2057512873120738853LL;
unsigned short var_11 = (unsigned short)41332;
int zero = 0;
unsigned int var_13 = 1489876609U;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 509078830U;
unsigned int var_16 = 992818950U;
_Bool arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
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
