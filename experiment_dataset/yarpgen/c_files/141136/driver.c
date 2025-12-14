#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_11 = 11620279597961201643ULL;
unsigned long long int var_13 = 3685737956108983142ULL;
int zero = 0;
long long int var_18 = -926150257423071171LL;
unsigned short var_19 = (unsigned short)38826;
unsigned char var_20 = (unsigned char)74;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
