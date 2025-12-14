#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
int var_10 = 1705679051;
long long int var_15 = 5381627721674775846LL;
int zero = 0;
unsigned int var_19 = 1984255282U;
unsigned char var_20 = (unsigned char)254;
unsigned long long int var_21 = 16460466055060939177ULL;
short var_22 = (short)1846;
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
