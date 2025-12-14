#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20357;
short var_4 = (short)10631;
unsigned long long int var_9 = 17228557062579175466ULL;
long long int var_11 = -7523918432928382237LL;
int zero = 0;
signed char var_12 = (signed char)15;
unsigned long long int var_13 = 11465276238042158931ULL;
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
