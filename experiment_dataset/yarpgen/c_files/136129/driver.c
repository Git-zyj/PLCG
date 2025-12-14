#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1228925394950810645ULL;
unsigned long long int var_4 = 12850220178571406566ULL;
unsigned char var_8 = (unsigned char)86;
int zero = 0;
unsigned int var_15 = 1312290779U;
unsigned int var_16 = 204636748U;
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
