#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16107482397161667609ULL;
int var_6 = -1378251230;
unsigned short var_9 = (unsigned short)35682;
unsigned long long int var_16 = 17303082789104490986ULL;
int zero = 0;
int var_18 = 425960026;
long long int var_19 = 2846395966341618513LL;
short var_20 = (short)9687;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
