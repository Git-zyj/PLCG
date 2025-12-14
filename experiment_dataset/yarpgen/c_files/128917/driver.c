#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8064944113233319524LL;
int var_10 = -39628407;
long long int var_17 = -7107762215429533682LL;
int zero = 0;
unsigned char var_20 = (unsigned char)72;
unsigned long long int var_21 = 11022498936301886371ULL;
long long int var_22 = -7732649059993438668LL;
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
