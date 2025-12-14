#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1386696509;
unsigned char var_5 = (unsigned char)212;
int var_8 = -1146874926;
unsigned long long int var_9 = 4576362484225765892ULL;
int zero = 0;
int var_10 = -1197010012;
int var_11 = -1200737227;
unsigned int var_12 = 3939891303U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
