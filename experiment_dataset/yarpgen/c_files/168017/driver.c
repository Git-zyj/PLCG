#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14185364960080490934ULL;
unsigned int var_2 = 1967019274U;
unsigned long long int var_5 = 1468545652273118661ULL;
unsigned char var_11 = (unsigned char)242;
int zero = 0;
long long int var_13 = 6353235288155466996LL;
long long int var_14 = 8447574734145465804LL;
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
