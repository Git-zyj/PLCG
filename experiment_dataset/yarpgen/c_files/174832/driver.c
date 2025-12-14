#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -7932729380028671086LL;
long long int var_8 = 499590476137076779LL;
unsigned short var_10 = (unsigned short)54506;
long long int var_11 = 6512393259729025061LL;
int zero = 0;
signed char var_13 = (signed char)-19;
signed char var_14 = (signed char)-95;
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
