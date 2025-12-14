#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1369612753;
signed char var_4 = (signed char)103;
unsigned long long int var_9 = 14676469818149667951ULL;
long long int var_10 = -454383881655898158LL;
int var_11 = 864232938;
int zero = 0;
int var_12 = -1762930873;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 2238407920U;
unsigned int var_15 = 3592194257U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
