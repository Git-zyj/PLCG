#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2122506019779862901LL;
unsigned char var_2 = (unsigned char)87;
int var_4 = 1182986868;
int zero = 0;
unsigned char var_12 = (unsigned char)147;
unsigned char var_13 = (unsigned char)68;
void init() {
}

void checksum() {
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
