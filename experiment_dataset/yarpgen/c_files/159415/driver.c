#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)92;
int var_3 = 859024228;
_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 11895469011525305344ULL;
int zero = 0;
unsigned short var_10 = (unsigned short)39834;
signed char var_11 = (signed char)88;
unsigned long long int var_12 = 12856784216799867398ULL;
unsigned int var_13 = 1659198669U;
signed char var_14 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
