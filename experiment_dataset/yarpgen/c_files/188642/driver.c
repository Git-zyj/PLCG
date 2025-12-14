#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)186;
unsigned int var_6 = 1657837068U;
unsigned char var_7 = (unsigned char)18;
int var_8 = 172116411;
int zero = 0;
unsigned short var_12 = (unsigned short)33818;
long long int var_13 = 1774300315719919405LL;
unsigned int var_14 = 2026881616U;
unsigned char var_15 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
