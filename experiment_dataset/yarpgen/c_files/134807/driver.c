#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7163053005320687357ULL;
signed char var_14 = (signed char)18;
int zero = 0;
int var_15 = -434155887;
unsigned long long int var_16 = 11658146699061954198ULL;
unsigned char var_17 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
