#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4350949589013652315LL;
signed char var_3 = (signed char)31;
unsigned long long int var_13 = 9672196889862669281ULL;
unsigned short var_17 = (unsigned short)60732;
int zero = 0;
signed char var_19 = (signed char)-49;
short var_20 = (short)-29018;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
