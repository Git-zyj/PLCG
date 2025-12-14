#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19691;
int var_5 = -1735648130;
unsigned int var_8 = 1979049145U;
long long int var_10 = -6636772621164952746LL;
short var_11 = (short)10626;
int var_12 = 1849141058;
unsigned long long int var_14 = 1310025277734897977ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)125;
unsigned int var_17 = 75936874U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
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
