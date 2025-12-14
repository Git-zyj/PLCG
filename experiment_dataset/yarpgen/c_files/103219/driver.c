#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4070052863U;
unsigned short var_2 = (unsigned short)5711;
unsigned int var_3 = 2454435423U;
int zero = 0;
long long int var_12 = 262161308104737166LL;
unsigned long long int var_13 = 1088448518829128954ULL;
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
