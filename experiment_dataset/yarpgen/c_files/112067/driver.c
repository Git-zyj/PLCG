#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3632792177733060727LL;
unsigned int var_8 = 1938359698U;
long long int var_11 = 6512597521259124574LL;
int zero = 0;
int var_13 = 18936487;
unsigned int var_14 = 1535280791U;
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
