#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-50;
unsigned char var_7 = (unsigned char)87;
unsigned char var_8 = (unsigned char)206;
unsigned short var_13 = (unsigned short)44066;
int zero = 0;
long long int var_14 = -9010120017544664100LL;
unsigned short var_15 = (unsigned short)25775;
unsigned long long int var_16 = 284907003739503ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
