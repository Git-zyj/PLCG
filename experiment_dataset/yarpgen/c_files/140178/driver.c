#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)21;
unsigned int var_10 = 2854037417U;
long long int var_11 = -7040177039310366340LL;
signed char var_12 = (signed char)-66;
unsigned long long int var_15 = 4179486418843035728ULL;
unsigned int var_16 = 3015844124U;
int zero = 0;
unsigned int var_17 = 2152016248U;
unsigned long long int var_18 = 6814978582040385322ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
