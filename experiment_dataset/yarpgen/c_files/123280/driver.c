#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16187;
short var_2 = (short)-30326;
int zero = 0;
signed char var_15 = (signed char)50;
long long int var_16 = 5224775490322429468LL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 1614678673U;
unsigned int var_19 = 425312360U;
long long int var_20 = 1307859388930379918LL;
signed char arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-120;
}

void checksum() {
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
