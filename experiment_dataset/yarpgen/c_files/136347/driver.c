#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-57;
unsigned long long int var_12 = 11268551073667799760ULL;
long long int var_13 = -8621406837702730429LL;
int zero = 0;
unsigned long long int var_15 = 11416596882396919147ULL;
long long int var_16 = -4159222315492795515LL;
void init() {
}

void checksum() {
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
