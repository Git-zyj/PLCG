#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)248;
short var_1 = (short)11611;
int var_4 = 378734672;
long long int var_12 = -5900987946048843034LL;
int zero = 0;
unsigned int var_14 = 3464214505U;
int var_15 = -336276592;
unsigned long long int var_16 = 11008198213246856709ULL;
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
