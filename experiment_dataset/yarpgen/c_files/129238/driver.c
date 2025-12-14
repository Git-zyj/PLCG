#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16260;
unsigned short var_3 = (unsigned short)29914;
unsigned char var_6 = (unsigned char)179;
long long int var_8 = 248650447248733704LL;
int zero = 0;
unsigned int var_13 = 3568840631U;
signed char var_14 = (signed char)-11;
void init() {
}

void checksum() {
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
