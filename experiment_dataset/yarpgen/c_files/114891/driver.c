#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3970359100435422577LL;
unsigned short var_4 = (unsigned short)6578;
signed char var_9 = (signed char)87;
int zero = 0;
unsigned long long int var_10 = 4817919657745588241ULL;
unsigned char var_11 = (unsigned char)71;
unsigned char var_12 = (unsigned char)5;
unsigned long long int var_13 = 16119067349363429783ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
