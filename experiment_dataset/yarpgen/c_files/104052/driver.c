#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21752;
unsigned char var_11 = (unsigned char)219;
int zero = 0;
long long int var_14 = 5327531752857694293LL;
unsigned int var_15 = 2735032649U;
unsigned long long int var_16 = 2376530850555418502ULL;
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
