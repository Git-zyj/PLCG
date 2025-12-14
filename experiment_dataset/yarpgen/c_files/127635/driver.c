#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25618;
signed char var_2 = (signed char)-13;
long long int var_5 = 661477487309286147LL;
int zero = 0;
unsigned long long int var_12 = 12517607347320390464ULL;
unsigned short var_13 = (unsigned short)25338;
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
