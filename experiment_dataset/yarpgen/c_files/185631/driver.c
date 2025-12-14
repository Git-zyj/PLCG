#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1313302377U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_10 = 7058865236509908089ULL;
int zero = 0;
short var_12 = (short)-4114;
unsigned int var_13 = 1071272690U;
short var_14 = (short)12876;
unsigned long long int var_15 = 13453421484822463596ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
