#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-62;
short var_2 = (short)8967;
unsigned int var_3 = 2533582682U;
long long int var_4 = -2110602557286509890LL;
long long int var_5 = 3198446008908658409LL;
short var_9 = (short)-10290;
short var_10 = (short)-19322;
unsigned int var_12 = 447015537U;
long long int var_16 = -6329468835300362727LL;
short var_17 = (short)23569;
int zero = 0;
unsigned int var_20 = 3734245758U;
unsigned long long int var_21 = 6644944298024471597ULL;
unsigned int var_22 = 257802538U;
signed char var_23 = (signed char)59;
signed char var_24 = (signed char)38;
short var_25 = (short)-10834;
int arr_0 [18] ;
unsigned long long int arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 415231765;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 4582799225875488838ULL;
}

void checksum() {
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
