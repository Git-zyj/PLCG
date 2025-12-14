#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1075537433515998147ULL;
short var_3 = (short)9968;
_Bool var_9 = (_Bool)0;
unsigned short var_11 = (unsigned short)15334;
short var_12 = (short)13032;
int zero = 0;
unsigned long long int var_13 = 799266887276981990ULL;
unsigned long long int var_14 = 229077110688580512ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
