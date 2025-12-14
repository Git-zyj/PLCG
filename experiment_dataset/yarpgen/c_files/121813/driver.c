#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 1092215901080032576LL;
long long int var_7 = -340926430642800241LL;
unsigned long long int var_8 = 383103648942251650ULL;
unsigned long long int var_12 = 7351340713770715039ULL;
int zero = 0;
short var_13 = (short)-9368;
unsigned short var_14 = (unsigned short)25415;
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
