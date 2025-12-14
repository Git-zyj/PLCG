#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 166391529;
int var_6 = -1764306031;
unsigned long long int var_8 = 9663708579535478617ULL;
unsigned long long int var_14 = 787103880647282576ULL;
int zero = 0;
long long int var_16 = 1582923631913589803LL;
unsigned char var_17 = (unsigned char)149;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
