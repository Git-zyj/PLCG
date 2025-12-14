#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2713852278926876222LL;
unsigned long long int var_2 = 915895695733674689ULL;
signed char var_5 = (signed char)-101;
int zero = 0;
int var_10 = -1123026150;
int var_11 = -1079621334;
unsigned int var_12 = 816694403U;
_Bool var_13 = (_Bool)1;
int var_14 = 326165569;
long long int arr_1 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -2144406977769165487LL;
}

void checksum() {
    hash(&seed, var_10);
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
