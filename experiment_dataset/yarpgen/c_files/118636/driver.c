#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_12 = -8723551036885288749LL;
long long int var_15 = 1387144595268208182LL;
int zero = 0;
unsigned long long int var_18 = 11808836789624701217ULL;
unsigned short var_19 = (unsigned short)29642;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
