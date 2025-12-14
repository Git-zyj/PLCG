#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18900;
unsigned short var_1 = (unsigned short)43467;
unsigned char var_2 = (unsigned char)117;
int zero = 0;
unsigned short var_11 = (unsigned short)34454;
int var_12 = -1119077262;
int var_13 = 1099629336;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
