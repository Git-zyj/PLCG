#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31590;
long long int var_4 = 8522168153838038422LL;
unsigned long long int var_6 = 14143011922553865736ULL;
int var_9 = -998154911;
int zero = 0;
long long int var_10 = -4017556127299847044LL;
short var_11 = (short)12470;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
