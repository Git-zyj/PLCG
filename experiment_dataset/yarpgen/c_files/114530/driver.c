#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 892508670914034691LL;
long long int var_14 = -7818255731994328217LL;
unsigned long long int var_16 = 14293283799878537014ULL;
int zero = 0;
signed char var_20 = (signed char)83;
unsigned char var_21 = (unsigned char)251;
unsigned int var_22 = 412264517U;
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
