#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4495;
signed char var_4 = (signed char)68;
unsigned short var_8 = (unsigned short)31075;
long long int var_13 = 4060463698068487018LL;
int zero = 0;
short var_16 = (short)23047;
long long int var_17 = -6795774647736676718LL;
signed char var_18 = (signed char)-115;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
