#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)200;
long long int var_7 = -4961619711737303776LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 6113135477475747513ULL;
unsigned char var_15 = (unsigned char)168;
signed char var_19 = (signed char)-102;
int zero = 0;
short var_20 = (short)25839;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)238;
int arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -39467828;
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
