#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3849137001U;
unsigned long long int var_6 = 9932666189338314735ULL;
int zero = 0;
short var_20 = (short)27829;
unsigned long long int var_21 = 14795381092558391815ULL;
unsigned long long int var_22 = 16058022211848157064ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
