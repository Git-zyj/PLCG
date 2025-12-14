#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 574655786;
int var_4 = 752220223;
unsigned long long int var_9 = 511594346745372591ULL;
long long int var_10 = 7753335092796180947LL;
int zero = 0;
int var_13 = 618537953;
_Bool var_14 = (_Bool)0;
short var_15 = (short)28076;
unsigned short var_16 = (unsigned short)18351;
int arr_2 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 184446555 : -1854076418;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
