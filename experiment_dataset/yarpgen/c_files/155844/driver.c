#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8675102308186693805LL;
unsigned short var_3 = (unsigned short)40485;
signed char var_4 = (signed char)-101;
unsigned char var_9 = (unsigned char)206;
int zero = 0;
unsigned char var_11 = (unsigned char)143;
signed char var_12 = (signed char)77;
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
