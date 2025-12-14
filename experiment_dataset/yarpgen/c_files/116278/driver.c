#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 762444591;
signed char var_1 = (signed char)-19;
unsigned long long int var_5 = 5002083649318223142ULL;
unsigned long long int var_6 = 3475715493472599247ULL;
unsigned long long int var_11 = 13415205389065330940ULL;
int zero = 0;
signed char var_12 = (signed char)-88;
unsigned long long int var_13 = 13995607146706873564ULL;
unsigned long long int var_14 = 7066056911849556541ULL;
unsigned int arr_2 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 3322620150U;
}

void checksum() {
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
