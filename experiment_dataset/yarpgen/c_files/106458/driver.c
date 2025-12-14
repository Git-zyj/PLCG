#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-78;
short var_5 = (short)-17263;
signed char var_7 = (signed char)-18;
unsigned short var_8 = (unsigned short)1034;
unsigned char var_9 = (unsigned char)223;
long long int var_10 = -4144996568207049550LL;
int zero = 0;
unsigned long long int var_11 = 16665970138721076473ULL;
signed char var_12 = (signed char)-87;
signed char var_13 = (signed char)124;
unsigned short var_14 = (unsigned short)18927;
unsigned int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 869367271U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
