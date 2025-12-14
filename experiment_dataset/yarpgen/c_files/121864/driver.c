#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)585;
signed char var_1 = (signed char)-18;
unsigned long long int var_2 = 12202254251349250655ULL;
long long int var_8 = 1928691515654053935LL;
int zero = 0;
unsigned short var_12 = (unsigned short)12679;
unsigned short var_13 = (unsigned short)50951;
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
