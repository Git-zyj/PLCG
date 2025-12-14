#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-72;
int var_9 = -570088905;
unsigned int var_10 = 2850522686U;
unsigned long long int var_11 = 6453845716190282446ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)45425;
short var_14 = (short)-994;
int var_15 = -976190937;
void init() {
}

void checksum() {
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
