#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2218257293156426079LL;
unsigned char var_2 = (unsigned char)102;
int var_3 = 291874686;
long long int var_6 = 2529352598092433940LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 6706749774664379220ULL;
int zero = 0;
short var_13 = (short)16469;
int var_14 = -1117920725;
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
