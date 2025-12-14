#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 11984286024806211308ULL;
_Bool var_9 = (_Bool)0;
long long int var_11 = 233061938181388385LL;
int zero = 0;
unsigned char var_12 = (unsigned char)245;
unsigned char var_13 = (unsigned char)126;
unsigned long long int var_14 = 4200401796481522529ULL;
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
