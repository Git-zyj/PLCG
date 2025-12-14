#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55541;
signed char var_6 = (signed char)-71;
unsigned char var_7 = (unsigned char)124;
unsigned long long int var_8 = 16228091350454909308ULL;
unsigned long long int var_10 = 16729756793566543878ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)22593;
long long int var_14 = -193230131467867472LL;
unsigned short var_15 = (unsigned short)3001;
unsigned short var_16 = (unsigned short)50493;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
