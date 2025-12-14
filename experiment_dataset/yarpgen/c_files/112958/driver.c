#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -2729790536676431304LL;
unsigned char var_13 = (unsigned char)21;
unsigned long long int var_16 = 14085282897849685836ULL;
int zero = 0;
signed char var_19 = (signed char)-23;
unsigned char var_20 = (unsigned char)241;
int var_21 = -1583529133;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
