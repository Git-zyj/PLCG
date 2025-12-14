#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)66;
unsigned short var_5 = (unsigned short)48245;
long long int var_8 = -2067928471637615094LL;
int zero = 0;
unsigned short var_10 = (unsigned short)20682;
long long int var_11 = -8561418602859716805LL;
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
