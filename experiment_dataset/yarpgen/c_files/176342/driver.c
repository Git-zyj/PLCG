#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-55;
short var_6 = (short)9989;
long long int var_7 = -3322418478324127749LL;
unsigned char var_8 = (unsigned char)255;
int zero = 0;
long long int var_10 = 6440175429456332982LL;
unsigned char var_11 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
