#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)60458;
signed char var_4 = (signed char)-72;
unsigned short var_5 = (unsigned short)48702;
int var_11 = -69076012;
int zero = 0;
signed char var_15 = (signed char)-92;
signed char var_16 = (signed char)-97;
void init() {
}

void checksum() {
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
