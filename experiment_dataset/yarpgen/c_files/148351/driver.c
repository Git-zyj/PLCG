#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)14971;
long long int var_12 = -3200799435756748566LL;
int zero = 0;
unsigned long long int var_20 = 10218538342635019200ULL;
unsigned long long int var_21 = 14202883286414213218ULL;
unsigned short var_22 = (unsigned short)7100;
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
