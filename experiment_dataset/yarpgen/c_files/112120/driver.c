#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-21;
unsigned short var_7 = (unsigned short)43467;
unsigned short var_9 = (unsigned short)51920;
short var_12 = (short)-1673;
int zero = 0;
long long int var_13 = -7439260727138621395LL;
int var_14 = 1320274479;
void init() {
}

void checksum() {
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
