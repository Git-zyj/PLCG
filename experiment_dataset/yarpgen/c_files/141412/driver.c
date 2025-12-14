#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)64134;
signed char var_9 = (signed char)-38;
short var_11 = (short)-26899;
unsigned short var_13 = (unsigned short)1208;
int zero = 0;
int var_15 = 1737961894;
unsigned long long int var_16 = 15728636293129447817ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
