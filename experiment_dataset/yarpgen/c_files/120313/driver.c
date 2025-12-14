#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8690;
unsigned long long int var_1 = 6011759188289575065ULL;
long long int var_4 = -6746729832601395155LL;
int zero = 0;
unsigned int var_11 = 560691296U;
unsigned char var_12 = (unsigned char)94;
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
