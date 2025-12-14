#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10399874853298116833ULL;
unsigned long long int var_12 = 2539756986663960340ULL;
int zero = 0;
unsigned long long int var_13 = 2036085929210254152ULL;
unsigned long long int var_14 = 572433792888945673ULL;
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
