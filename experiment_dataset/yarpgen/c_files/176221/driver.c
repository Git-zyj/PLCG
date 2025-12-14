#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1022452609U;
unsigned long long int var_15 = 13907219531580615356ULL;
int zero = 0;
unsigned long long int var_19 = 5401795575556547489ULL;
long long int var_20 = -797763549686508097LL;
unsigned int var_21 = 1346751914U;
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
