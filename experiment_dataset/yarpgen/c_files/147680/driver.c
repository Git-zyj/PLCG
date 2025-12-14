#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 908806532U;
unsigned short var_5 = (unsigned short)15364;
long long int var_8 = 5426816609775987802LL;
signed char var_12 = (signed char)-11;
int zero = 0;
unsigned char var_13 = (unsigned char)138;
unsigned char var_14 = (unsigned char)56;
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
