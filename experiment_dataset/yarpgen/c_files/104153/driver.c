#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -8771213942595929790LL;
long long int var_4 = -5031515975349578695LL;
long long int var_5 = -6893775035558044251LL;
short var_7 = (short)-16772;
int zero = 0;
signed char var_10 = (signed char)-103;
unsigned char var_11 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
