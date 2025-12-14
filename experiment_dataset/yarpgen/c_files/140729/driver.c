#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29697;
unsigned int var_1 = 2280863115U;
long long int var_2 = -7505017679794762570LL;
signed char var_7 = (signed char)24;
signed char var_10 = (signed char)-29;
int zero = 0;
unsigned long long int var_11 = 14062955804550903611ULL;
short var_12 = (short)27511;
long long int var_13 = -7243615894526170813LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
