#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17579772057642432140ULL;
short var_12 = (short)-27015;
unsigned int var_13 = 2207441004U;
int zero = 0;
unsigned long long int var_15 = 3307134176420178013ULL;
signed char var_16 = (signed char)78;
signed char var_17 = (signed char)33;
unsigned short var_18 = (unsigned short)43156;
signed char arr_1 [24] ;
signed char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)-8;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
