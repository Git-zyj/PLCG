#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4264311779U;
short var_7 = (short)22822;
short var_11 = (short)-22381;
int zero = 0;
unsigned long long int var_12 = 8981259078205995232ULL;
unsigned int var_13 = 83014990U;
unsigned char var_14 = (unsigned char)111;
unsigned short var_15 = (unsigned short)24365;
unsigned long long int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 12163557367654598603ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
