#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1962545467;
unsigned long long int var_12 = 4816106690578943613ULL;
unsigned char var_14 = (unsigned char)199;
int var_16 = 1075071796;
int zero = 0;
signed char var_17 = (signed char)-60;
int var_18 = -1185190137;
short var_19 = (short)-19183;
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
