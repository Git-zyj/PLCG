#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1375951631U;
unsigned int var_2 = 1654291458U;
unsigned int var_17 = 1083186049U;
int zero = 0;
unsigned int var_18 = 671175696U;
unsigned int var_19 = 1245420344U;
unsigned int var_20 = 1829962885U;
unsigned int var_21 = 3668028861U;
signed char var_22 = (signed char)-96;
unsigned int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 2256427400U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
