#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 77713282U;
unsigned char var_4 = (unsigned char)179;
long long int var_7 = -4363730348604567001LL;
int zero = 0;
unsigned short var_11 = (unsigned short)35536;
unsigned int var_12 = 3062722034U;
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
