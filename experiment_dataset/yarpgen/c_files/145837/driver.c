#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32903;
unsigned long long int var_3 = 10227102658141674199ULL;
unsigned int var_13 = 617347787U;
unsigned int var_15 = 526446580U;
int zero = 0;
long long int var_20 = -4380649894486124154LL;
signed char var_21 = (signed char)36;
unsigned int var_22 = 3498615707U;
unsigned int var_23 = 1157676542U;
unsigned int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 1507250798U;
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
