#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 8513453038511959222LL;
signed char var_6 = (signed char)100;
unsigned char var_12 = (unsigned char)18;
int zero = 0;
unsigned char var_20 = (unsigned char)186;
long long int var_21 = -505299145876109685LL;
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
