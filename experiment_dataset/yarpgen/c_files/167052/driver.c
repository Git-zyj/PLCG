#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5680581898897438133ULL;
_Bool var_1 = (_Bool)0;
signed char var_7 = (signed char)120;
int zero = 0;
unsigned long long int var_10 = 11244289004116696232ULL;
unsigned long long int var_11 = 14963871888836542428ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
