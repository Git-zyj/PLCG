#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10719556506700034854ULL;
unsigned long long int var_2 = 15656164758146109042ULL;
long long int var_7 = -2767457693121732010LL;
int zero = 0;
signed char var_13 = (signed char)28;
signed char var_14 = (signed char)100;
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
