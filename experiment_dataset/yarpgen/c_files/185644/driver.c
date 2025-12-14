#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12181683878719038114ULL;
unsigned short var_3 = (unsigned short)29527;
unsigned int var_4 = 2564682377U;
unsigned char var_10 = (unsigned char)222;
int zero = 0;
unsigned short var_12 = (unsigned short)4015;
unsigned long long int var_13 = 8261051105700286339ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
