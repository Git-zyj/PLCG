#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2942942306126905030ULL;
short var_3 = (short)29140;
unsigned char var_7 = (unsigned char)118;
int zero = 0;
signed char var_13 = (signed char)82;
unsigned long long int var_14 = 190765692336379347ULL;
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
