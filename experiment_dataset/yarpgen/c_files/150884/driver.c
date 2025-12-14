#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8578;
unsigned char var_7 = (unsigned char)209;
long long int var_15 = 3435651539952007444LL;
int zero = 0;
unsigned long long int var_16 = 15413711340119772625ULL;
long long int var_17 = -5458056691421439731LL;
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
