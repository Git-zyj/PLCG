#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5239917201382987962ULL;
signed char var_2 = (signed char)-126;
long long int var_6 = -5729137259862205291LL;
unsigned long long int var_9 = 15011907723047695868ULL;
unsigned long long int var_10 = 3380316700071931715ULL;
int zero = 0;
signed char var_18 = (signed char)-62;
unsigned long long int var_19 = 4565231266179765937ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1108799112U;
unsigned long long int var_22 = 15112671712753820086ULL;
short arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-4139;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
