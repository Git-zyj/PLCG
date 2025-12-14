#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -107798690;
unsigned char var_3 = (unsigned char)51;
unsigned char var_16 = (unsigned char)7;
int zero = 0;
long long int var_17 = -492644696375284782LL;
unsigned char var_18 = (unsigned char)18;
unsigned long long int var_19 = 11067270487684169833ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
