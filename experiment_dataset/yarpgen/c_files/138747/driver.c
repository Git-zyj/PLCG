#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)33782;
long long int var_6 = -1408909988858635315LL;
long long int var_14 = -4318952234610762173LL;
int zero = 0;
unsigned long long int var_18 = 2478944238874986965ULL;
long long int var_19 = -7644261656150941128LL;
signed char var_20 = (signed char)101;
int var_21 = -1020188452;
unsigned long long int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 13937257194675782165ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
