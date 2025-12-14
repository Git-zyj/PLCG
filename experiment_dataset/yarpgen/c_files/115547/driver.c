#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 10319672858364180373ULL;
unsigned short var_9 = (unsigned short)61049;
unsigned int var_10 = 1039776088U;
signed char var_18 = (signed char)50;
int zero = 0;
signed char var_20 = (signed char)-65;
unsigned int var_21 = 84098965U;
short var_22 = (short)19313;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
