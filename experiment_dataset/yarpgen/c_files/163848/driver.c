#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1220605816;
_Bool var_2 = (_Bool)0;
unsigned int var_4 = 3071096973U;
unsigned char var_5 = (unsigned char)23;
unsigned int var_12 = 4285722111U;
int zero = 0;
int var_13 = -910588894;
long long int var_14 = -5985793334219991148LL;
unsigned int var_15 = 1668474996U;
unsigned long long int var_16 = 14254712276063506958ULL;
int var_17 = -518625539;
signed char arr_1 [10] ;
signed char arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-85;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (signed char)118;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
