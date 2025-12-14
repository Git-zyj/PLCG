#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13770819075591215013ULL;
short var_4 = (short)-15487;
int var_7 = 1539518614;
int var_8 = 948217307;
int var_9 = -1663995918;
unsigned long long int var_10 = 654691597338779050ULL;
int zero = 0;
int var_14 = -176002895;
long long int var_15 = -3339344442934519336LL;
int var_16 = 1640860490;
unsigned long long int var_17 = 3982728896143229747ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
