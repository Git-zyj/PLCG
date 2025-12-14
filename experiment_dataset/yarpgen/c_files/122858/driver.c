#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1732;
unsigned short var_1 = (unsigned short)25030;
unsigned long long int var_5 = 15534700549298511234ULL;
unsigned long long int var_10 = 17597827141006752851ULL;
unsigned long long int var_12 = 2925251610447975481ULL;
unsigned int var_13 = 1973788575U;
int zero = 0;
unsigned long long int var_14 = 5046037280858029385ULL;
long long int var_15 = -1545421986366876511LL;
unsigned int var_16 = 2371517229U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
