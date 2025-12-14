#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7286582563710790590LL;
unsigned int var_5 = 3631902038U;
signed char var_9 = (signed char)-51;
int var_10 = 1564358796;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 160778483;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
