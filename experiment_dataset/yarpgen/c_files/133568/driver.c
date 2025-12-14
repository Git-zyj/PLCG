#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10517769904990943493ULL;
unsigned short var_10 = (unsigned short)3447;
unsigned char var_12 = (unsigned char)117;
int zero = 0;
unsigned short var_14 = (unsigned short)16048;
int var_15 = -1902680696;
unsigned char var_16 = (unsigned char)159;
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
