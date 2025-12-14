#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5223100512138883791LL;
signed char var_8 = (signed char)-58;
unsigned long long int var_10 = 794891713643639224ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)40;
signed char var_14 = (signed char)-83;
signed char var_15 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
