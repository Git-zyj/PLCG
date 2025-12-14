#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3415328316U;
unsigned short var_2 = (unsigned short)53928;
unsigned int var_3 = 4005217198U;
long long int var_5 = -5373006254761271236LL;
unsigned long long int var_10 = 4758806389832581010ULL;
unsigned long long int var_16 = 17005290450836352276ULL;
long long int var_18 = -5120099301743893637LL;
int zero = 0;
unsigned char var_19 = (unsigned char)254;
int var_20 = -952854522;
int var_21 = -442716409;
long long int var_22 = -5748854714555294745LL;
unsigned short var_23 = (unsigned short)6954;
long long int var_24 = -958479878908312888LL;
unsigned int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1644975564U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
