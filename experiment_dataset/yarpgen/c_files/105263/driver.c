#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)16005;
unsigned long long int var_4 = 7638003764319080222ULL;
int var_12 = -1847487040;
int zero = 0;
short var_14 = (short)20246;
unsigned short var_15 = (unsigned short)15097;
int var_16 = 179221180;
unsigned int var_17 = 3547661597U;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
