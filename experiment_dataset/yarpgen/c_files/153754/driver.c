#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 464510752U;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3373455291U;
signed char var_15 = (signed char)-107;
long long int var_16 = -3658785646440018973LL;
int zero = 0;
short var_17 = (short)-26180;
unsigned long long int var_18 = 9851459496386762877ULL;
_Bool var_19 = (_Bool)1;
long long int var_20 = 7500145829111992270LL;
void init() {
}

void checksum() {
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
