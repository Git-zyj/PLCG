#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3712404202U;
unsigned long long int var_6 = 17639279018091809815ULL;
int var_8 = 1542374958;
unsigned long long int var_10 = 18015058055067661335ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)41059;
unsigned short var_13 = (unsigned short)30966;
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
