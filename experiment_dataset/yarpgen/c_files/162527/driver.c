#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 295838852U;
unsigned long long int var_6 = 16444582375992936038ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_13 = 8899123117929586386LL;
long long int var_14 = -1518475024358638122LL;
int var_15 = -210439580;
void init() {
}

void checksum() {
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
