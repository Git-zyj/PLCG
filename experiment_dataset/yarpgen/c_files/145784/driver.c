#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-39;
unsigned int var_4 = 1014216049U;
int var_5 = -1436532928;
unsigned char var_6 = (unsigned char)97;
int zero = 0;
int var_11 = 1635259726;
unsigned char var_12 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
