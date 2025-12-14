#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6580;
long long int var_7 = 7340289332000731319LL;
unsigned char var_11 = (unsigned char)241;
int zero = 0;
signed char var_12 = (signed char)-71;
int var_13 = 1435324712;
unsigned int var_14 = 1076919323U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
