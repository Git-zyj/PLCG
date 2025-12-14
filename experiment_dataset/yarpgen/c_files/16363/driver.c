#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 666709200788937372LL;
unsigned char var_7 = (unsigned char)13;
unsigned long long int var_9 = 10094577238596257335ULL;
signed char var_18 = (signed char)52;
int zero = 0;
short var_20 = (short)11588;
long long int var_21 = 16005395351958187LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
