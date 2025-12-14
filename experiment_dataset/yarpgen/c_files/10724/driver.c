#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 365956651;
unsigned long long int var_6 = 11188397650687610130ULL;
unsigned long long int var_9 = 13300621732192553646ULL;
signed char var_10 = (signed char)47;
int zero = 0;
long long int var_12 = -2529474778316304476LL;
unsigned long long int var_13 = 14164634443365123910ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
