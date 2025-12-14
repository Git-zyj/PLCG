#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)109;
long long int var_17 = 7017780347222756139LL;
int zero = 0;
unsigned char var_19 = (unsigned char)205;
unsigned long long int var_20 = 9517634432710844079ULL;
unsigned long long int var_21 = 12128857893100693278ULL;
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
