#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7733690554192089133LL;
unsigned short var_4 = (unsigned short)27784;
short var_8 = (short)28088;
signed char var_9 = (signed char)-47;
unsigned int var_11 = 1301917110U;
int zero = 0;
int var_14 = 1095027721;
unsigned long long int var_15 = 11922728395651963471ULL;
unsigned int var_16 = 1692653507U;
signed char var_17 = (signed char)-95;
long long int var_18 = 1559095471152671110LL;
unsigned long long int var_19 = 9435320916055506934ULL;
unsigned int arr_2 [11] ;
long long int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 132579929U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = -6575706395028587930LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
