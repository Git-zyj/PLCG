#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3869183481U;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 7127952301472008631ULL;
int var_14 = 846923425;
short var_15 = (short)31161;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 12266622433486697150ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
