#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1391007488;
unsigned long long int var_4 = 7673003801638192776ULL;
unsigned int var_6 = 3934116969U;
int zero = 0;
signed char var_12 = (signed char)-109;
signed char var_13 = (signed char)84;
void init() {
}

void checksum() {
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
