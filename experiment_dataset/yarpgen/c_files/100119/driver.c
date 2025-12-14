#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_12 = 7724913844415512722ULL;
unsigned short var_13 = (unsigned short)42328;
unsigned short var_14 = (unsigned short)6874;
unsigned int var_16 = 4085133205U;
int zero = 0;
unsigned short var_18 = (unsigned short)36068;
unsigned short var_19 = (unsigned short)47801;
int var_20 = 12791848;
long long int var_21 = 6291392281708947977LL;
unsigned char var_22 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
