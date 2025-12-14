#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-34;
unsigned char var_10 = (unsigned char)18;
signed char var_13 = (signed char)-59;
int zero = 0;
signed char var_14 = (signed char)-57;
unsigned char var_15 = (unsigned char)143;
short var_16 = (short)14201;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
