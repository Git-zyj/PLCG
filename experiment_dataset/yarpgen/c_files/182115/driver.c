#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)23;
unsigned long long int var_4 = 11928060304096527728ULL;
int var_6 = 1863985236;
int zero = 0;
unsigned int var_11 = 2387559176U;
unsigned long long int var_12 = 12525684856207833375ULL;
unsigned short var_13 = (unsigned short)49405;
long long int arr_0 [19] ;
unsigned short arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 8027074663225003503LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (unsigned short)32350;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
