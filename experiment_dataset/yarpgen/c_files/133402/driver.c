#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21816;
unsigned int var_15 = 2626149150U;
int zero = 0;
unsigned long long int var_19 = 17082123960388343541ULL;
unsigned int var_20 = 406905602U;
signed char var_21 = (signed char)1;
int var_22 = 724772481;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
