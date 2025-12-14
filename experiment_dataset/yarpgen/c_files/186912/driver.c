#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 890403030031216292ULL;
unsigned char var_9 = (unsigned char)216;
short var_14 = (short)-27006;
int zero = 0;
short var_15 = (short)10186;
long long int var_16 = 5585426544122478665LL;
long long int var_17 = 8241372690251008189LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
