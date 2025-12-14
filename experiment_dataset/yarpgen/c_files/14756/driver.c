#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_18 = (unsigned short)1455;
long long int var_19 = 2387093382741051565LL;
int var_20 = -870735758;
signed char var_21 = (signed char)-37;
unsigned short var_22 = (unsigned short)21699;
int var_23 = -2061062175;
short var_24 = (short)32496;
short var_25 = (short)23291;
unsigned long long int arr_0 [23] [23] ;
unsigned long long int arr_2 [23] ;
unsigned int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 17181290327838204818ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 9498698276247160834ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 3365363169U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
