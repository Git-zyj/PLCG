#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4357887295990206465LL;
unsigned short var_8 = (unsigned short)30621;
signed char var_14 = (signed char)-61;
int zero = 0;
long long int var_15 = -531526491662860509LL;
long long int var_16 = 8062334827920562371LL;
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
