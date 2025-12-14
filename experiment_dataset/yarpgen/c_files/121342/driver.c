#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-70;
long long int var_3 = -6715639941173245823LL;
unsigned short var_5 = (unsigned short)34672;
unsigned short var_10 = (unsigned short)21729;
int zero = 0;
short var_11 = (short)25270;
unsigned char var_12 = (unsigned char)147;
int var_13 = 1582213632;
unsigned char var_14 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
