#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 23937177685093607LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 465168482066237722ULL;
int var_9 = -1884372341;
int var_10 = 2090701722;
int zero = 0;
unsigned long long int var_13 = 2292940930647276722ULL;
unsigned long long int var_14 = 8125114649489031378ULL;
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
