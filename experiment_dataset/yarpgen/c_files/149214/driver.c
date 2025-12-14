#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1411053355;
short var_2 = (short)-5947;
unsigned long long int var_3 = 14044757985869450253ULL;
unsigned long long int var_7 = 2078588501652830761ULL;
int zero = 0;
short var_10 = (short)-28440;
unsigned short var_11 = (unsigned short)7373;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
