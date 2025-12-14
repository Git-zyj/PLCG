#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8259675397299434335LL;
unsigned int var_5 = 1680425912U;
signed char var_7 = (signed char)-47;
unsigned char var_8 = (unsigned char)241;
unsigned int var_16 = 4011140674U;
int zero = 0;
short var_17 = (short)32706;
long long int var_18 = 6941536605401099233LL;
unsigned int var_19 = 3447856582U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
