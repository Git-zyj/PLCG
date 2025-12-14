#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 656799381;
signed char var_6 = (signed char)-103;
unsigned long long int var_10 = 11750087209201053296ULL;
signed char var_18 = (signed char)47;
int zero = 0;
int var_20 = 1974144292;
unsigned char var_21 = (unsigned char)142;
long long int var_22 = 3502739506509044156LL;
void init() {
}

void checksum() {
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
