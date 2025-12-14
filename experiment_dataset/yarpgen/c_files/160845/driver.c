#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1042326051U;
unsigned long long int var_2 = 2130478482662645278ULL;
unsigned int var_3 = 2163851527U;
long long int var_12 = 4094139613681532965LL;
int zero = 0;
long long int var_13 = 5319133528520767301LL;
unsigned long long int var_14 = 80955443957790393ULL;
void init() {
}

void checksum() {
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
