#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)65235;
unsigned long long int var_9 = 9225580209613646879ULL;
unsigned long long int var_14 = 874714193081585816ULL;
unsigned int var_15 = 2520745796U;
unsigned long long int var_16 = 331120213004123741ULL;
unsigned short var_17 = (unsigned short)42041;
int zero = 0;
signed char var_18 = (signed char)67;
unsigned long long int var_19 = 8249988593922280945ULL;
unsigned int var_20 = 1646282600U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
