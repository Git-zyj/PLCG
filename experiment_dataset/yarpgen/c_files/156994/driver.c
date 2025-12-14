#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3664199255737890804LL;
unsigned int var_1 = 3651094657U;
unsigned int var_2 = 2238618475U;
short var_4 = (short)-29346;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 3977076822U;
_Bool var_10 = (_Bool)1;
long long int var_11 = -1776048040542594448LL;
int zero = 0;
short var_12 = (short)-1595;
unsigned long long int var_13 = 17519845403070866445ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
