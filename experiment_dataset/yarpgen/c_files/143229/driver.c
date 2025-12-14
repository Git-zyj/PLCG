#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6781;
short var_2 = (short)-24074;
unsigned long long int var_3 = 14263908880756249835ULL;
short var_6 = (short)28172;
short var_7 = (short)15551;
int zero = 0;
unsigned char var_10 = (unsigned char)38;
int var_11 = -606518451;
int var_12 = 2104435737;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
