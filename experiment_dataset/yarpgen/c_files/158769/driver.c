#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -818449773;
signed char var_6 = (signed char)39;
signed char var_8 = (signed char)-58;
signed char var_11 = (signed char)92;
signed char var_13 = (signed char)22;
int zero = 0;
unsigned char var_16 = (unsigned char)0;
signed char var_17 = (signed char)-42;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
