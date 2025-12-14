#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)87;
unsigned short var_2 = (unsigned short)50912;
unsigned int var_4 = 3509583587U;
signed char var_6 = (signed char)100;
unsigned int var_9 = 1997463265U;
int zero = 0;
int var_14 = -43386108;
unsigned int var_15 = 3462730322U;
unsigned short var_16 = (unsigned short)1064;
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
