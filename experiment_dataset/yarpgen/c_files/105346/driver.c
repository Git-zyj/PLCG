#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6519040942921609553LL;
unsigned char var_8 = (unsigned char)189;
unsigned int var_9 = 1414759110U;
unsigned long long int var_13 = 17121835599274251881ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 370044472142402982ULL;
void init() {
}

void checksum() {
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
