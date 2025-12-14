#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 491002579U;
unsigned short var_8 = (unsigned short)50478;
unsigned short var_9 = (unsigned short)24650;
unsigned long long int var_13 = 4102531825293205200ULL;
int var_14 = 2006539094;
int zero = 0;
short var_18 = (short)20461;
short var_19 = (short)22867;
unsigned short var_20 = (unsigned short)3604;
unsigned int var_21 = 4021116935U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
