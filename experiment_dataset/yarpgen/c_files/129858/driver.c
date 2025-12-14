#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1014124152;
short var_7 = (short)1229;
int var_8 = 15302246;
signed char var_12 = (signed char)-36;
unsigned long long int var_13 = 3975682062312397919ULL;
int zero = 0;
unsigned long long int var_20 = 6024888614631218373ULL;
signed char var_21 = (signed char)57;
_Bool var_22 = (_Bool)0;
int var_23 = 667476078;
unsigned short arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)21420;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
