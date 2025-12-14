#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -551310304591198660LL;
int var_1 = 772502596;
int var_3 = 1741021607;
unsigned char var_4 = (unsigned char)150;
signed char var_5 = (signed char)-23;
short var_7 = (short)21746;
int var_10 = 785394707;
signed char var_14 = (signed char)84;
int zero = 0;
int var_15 = 995242227;
unsigned short var_16 = (unsigned short)57667;
void init() {
}

void checksum() {
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
