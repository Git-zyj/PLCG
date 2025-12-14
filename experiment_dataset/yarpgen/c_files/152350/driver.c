#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2445731258723888459LL;
signed char var_3 = (signed char)-20;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)59;
short var_7 = (short)1324;
long long int var_8 = -7802384206049494528LL;
signed char var_10 = (signed char)-24;
int zero = 0;
unsigned long long int var_12 = 18107988323812985397ULL;
unsigned char var_13 = (unsigned char)251;
_Bool arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
