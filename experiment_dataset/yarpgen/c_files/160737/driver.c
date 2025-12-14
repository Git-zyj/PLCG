#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)171;
unsigned short var_5 = (unsigned short)26210;
long long int var_6 = -8782683531792382303LL;
int var_9 = 1867120010;
int zero = 0;
unsigned char var_11 = (unsigned char)151;
signed char var_12 = (signed char)-101;
signed char var_13 = (signed char)104;
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
