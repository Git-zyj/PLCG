#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2274140352721752926LL;
unsigned long long int var_7 = 5950603782666776885ULL;
signed char var_14 = (signed char)103;
int var_19 = -1086318443;
int zero = 0;
unsigned int var_20 = 3733401008U;
short var_21 = (short)24288;
unsigned short var_22 = (unsigned short)15155;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
