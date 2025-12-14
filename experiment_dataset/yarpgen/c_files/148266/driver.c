#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_15 = -7787422413799992575LL;
signed char var_17 = (signed char)-90;
int zero = 0;
signed char var_18 = (signed char)-26;
unsigned long long int var_19 = 17318319268520956538ULL;
short var_20 = (short)4935;
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
