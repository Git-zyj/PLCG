#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3999216423541339645LL;
unsigned short var_2 = (unsigned short)21274;
int var_7 = 1705923099;
int zero = 0;
unsigned long long int var_13 = 9707624171440691737ULL;
signed char var_14 = (signed char)-75;
int var_15 = -193106757;
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
