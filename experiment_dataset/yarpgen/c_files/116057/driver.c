#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_6 = 14062648064868183493ULL;
int var_8 = -1059880342;
unsigned long long int var_10 = 892428980841473539ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
long long int var_12 = 1729345666485311487LL;
long long int var_13 = 5653918826795904280LL;
unsigned short var_14 = (unsigned short)16956;
unsigned long long int var_15 = 9700205322498183296ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
