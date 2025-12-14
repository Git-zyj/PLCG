#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)216;
unsigned int var_2 = 114057265U;
long long int var_3 = 113043006474864127LL;
signed char var_7 = (signed char)-80;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 4105044394723015804ULL;
unsigned int var_13 = 1371869617U;
unsigned char var_14 = (unsigned char)239;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
