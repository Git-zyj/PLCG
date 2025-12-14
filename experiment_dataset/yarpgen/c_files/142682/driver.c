#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11404607891012436654ULL;
unsigned long long int var_9 = 11733224665029592352ULL;
int zero = 0;
signed char var_11 = (signed char)25;
signed char var_12 = (signed char)-127;
signed char var_13 = (signed char)19;
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
