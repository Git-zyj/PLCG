#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 866047191;
int var_7 = 2003314440;
long long int var_8 = -7853570093599015464LL;
int var_13 = -154281167;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = 1623947837;
void init() {
}

void checksum() {
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
