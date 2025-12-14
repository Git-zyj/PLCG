#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-117;
unsigned short var_5 = (unsigned short)53599;
int var_7 = 1243774086;
short var_11 = (short)15751;
unsigned int var_16 = 1894367085U;
signed char var_17 = (signed char)117;
signed char var_18 = (signed char)-111;
int zero = 0;
int var_20 = 1742234991;
unsigned int var_21 = 4244739171U;
void init() {
}

void checksum() {
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
