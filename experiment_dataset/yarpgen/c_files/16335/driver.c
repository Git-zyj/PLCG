#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)-27;
unsigned int var_10 = 157104281U;
int zero = 0;
unsigned char var_19 = (unsigned char)120;
unsigned long long int var_20 = 6146196417502056318ULL;
unsigned int var_21 = 2906322590U;
short var_22 = (short)12692;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
