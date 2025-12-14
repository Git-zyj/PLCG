#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3369065722U;
int var_7 = -1005147832;
int var_11 = -8048553;
int zero = 0;
int var_12 = -572667128;
unsigned short var_13 = (unsigned short)39049;
unsigned short var_14 = (unsigned short)18808;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
