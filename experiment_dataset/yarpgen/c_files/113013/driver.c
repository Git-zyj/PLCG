#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2078054729;
long long int var_4 = 7484912379490168095LL;
int var_5 = -142141874;
unsigned char var_9 = (unsigned char)142;
int zero = 0;
long long int var_10 = 5870468779934924421LL;
unsigned int var_11 = 413719171U;
short var_12 = (short)-15473;
unsigned int var_13 = 3972466860U;
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
