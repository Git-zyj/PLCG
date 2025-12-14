#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54075;
unsigned long long int var_4 = 9470576471607975794ULL;
unsigned long long int var_5 = 2648507293410753894ULL;
unsigned long long int var_8 = 7088211221243744899ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)22196;
short var_14 = (short)14011;
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
