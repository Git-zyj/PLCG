#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12211306714118570520ULL;
unsigned int var_2 = 3032786196U;
short var_8 = (short)28226;
int zero = 0;
unsigned char var_10 = (unsigned char)119;
unsigned char var_11 = (unsigned char)111;
long long int var_12 = 194471616883139186LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
