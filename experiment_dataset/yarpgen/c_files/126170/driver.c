#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 10889698170002150907ULL;
unsigned long long int var_12 = 15422514513795577844ULL;
unsigned long long int var_13 = 2278227682710194426ULL;
int zero = 0;
unsigned long long int var_14 = 16588039630229973892ULL;
unsigned long long int var_15 = 9894640922992697071ULL;
unsigned long long int var_16 = 12634231638833678243ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
