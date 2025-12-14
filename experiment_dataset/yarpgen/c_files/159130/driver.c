#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)13355;
signed char var_7 = (signed char)-54;
unsigned long long int var_10 = 5400923268620120339ULL;
int zero = 0;
unsigned int var_11 = 3290168891U;
unsigned long long int var_12 = 4836102928557117674ULL;
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
