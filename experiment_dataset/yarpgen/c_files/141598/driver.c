#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)87;
unsigned short var_8 = (unsigned short)4896;
unsigned long long int var_9 = 13607891929497713465ULL;
unsigned char var_12 = (unsigned char)158;
int zero = 0;
signed char var_14 = (signed char)-33;
unsigned int var_15 = 4210138041U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
