#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1413290070285344577LL;
int var_10 = 1529597031;
unsigned long long int var_15 = 14149338425536121389ULL;
signed char var_17 = (signed char)(-127 - 1);
int zero = 0;
signed char var_19 = (signed char)48;
int var_20 = 184786238;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)4;
unsigned long long int var_23 = 11107223171306191917ULL;
_Bool arr_2 [21] ;
long long int arr_3 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -3718765908698990128LL : -6073973329716023747LL;
}

void checksum() {
    hash(&seed, var_19);
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
