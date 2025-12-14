#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)226;
unsigned short var_9 = (unsigned short)20863;
unsigned char var_10 = (unsigned char)149;
int zero = 0;
unsigned char var_12 = (unsigned char)16;
unsigned long long int var_13 = 362804177119545388ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
