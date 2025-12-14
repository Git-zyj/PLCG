#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6217189971648781978LL;
unsigned int var_8 = 2910179462U;
unsigned long long int var_9 = 6409024974413426709ULL;
int zero = 0;
signed char var_11 = (signed char)57;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3203480693U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
