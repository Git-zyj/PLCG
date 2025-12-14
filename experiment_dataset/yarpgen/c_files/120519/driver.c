#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)142;
int zero = 0;
unsigned long long int var_14 = 11069781504357420945ULL;
signed char var_15 = (signed char)19;
long long int var_16 = -6903908309195654100LL;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 7082205846277056383ULL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)51;
unsigned int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2608110374U : 2550178330U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
