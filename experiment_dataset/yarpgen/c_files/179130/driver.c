#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33041;
signed char var_9 = (signed char)71;
int var_11 = 287025992;
int zero = 0;
int var_12 = 1927609801;
unsigned int var_13 = 2399828222U;
unsigned short var_14 = (unsigned short)45363;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
