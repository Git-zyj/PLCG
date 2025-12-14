#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)171;
int var_4 = 215160920;
unsigned long long int var_5 = 18387384224575703729ULL;
unsigned short var_6 = (unsigned short)41002;
long long int var_8 = -3571264278984978305LL;
int zero = 0;
unsigned char var_12 = (unsigned char)168;
unsigned int var_13 = 2959116683U;
unsigned short var_14 = (unsigned short)27508;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
