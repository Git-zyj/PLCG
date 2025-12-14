#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 810887876U;
unsigned char var_5 = (unsigned char)118;
unsigned int var_14 = 2759588474U;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 2055975511;
unsigned char var_18 = (unsigned char)43;
unsigned int var_19 = 1408844287U;
unsigned char var_20 = (unsigned char)165;
unsigned int arr_0 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3293634247U : 1183500956U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
