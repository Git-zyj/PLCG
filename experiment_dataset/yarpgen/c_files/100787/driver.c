#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5319817142582994789LL;
unsigned long long int var_7 = 11570973865947886925ULL;
int var_10 = 1458077821;
int var_17 = 937398293;
int zero = 0;
unsigned int var_20 = 2579820729U;
unsigned char var_21 = (unsigned char)135;
void init() {
}

void checksum() {
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
