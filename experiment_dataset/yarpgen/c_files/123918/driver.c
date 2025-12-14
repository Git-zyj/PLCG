#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -8068379227903124515LL;
unsigned short var_5 = (unsigned short)14165;
long long int var_7 = 2177757274277453924LL;
int zero = 0;
long long int var_10 = -5336038965863828925LL;
unsigned long long int var_11 = 6942915245752593897ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
