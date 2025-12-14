#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1327849402;
unsigned int var_3 = 3311016014U;
unsigned int var_12 = 272971800U;
unsigned int var_16 = 3655969838U;
int zero = 0;
unsigned char var_20 = (unsigned char)69;
unsigned long long int var_21 = 3726582126113042444ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
