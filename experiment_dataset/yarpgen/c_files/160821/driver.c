#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1170596748924186599ULL;
unsigned int var_6 = 3564603765U;
short var_14 = (short)11141;
short var_18 = (short)16280;
int zero = 0;
unsigned short var_19 = (unsigned short)25681;
short var_20 = (short)9615;
unsigned char var_21 = (unsigned char)238;
unsigned long long int var_22 = 2970952910764747771ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
