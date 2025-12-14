#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8251646934376976814ULL;
unsigned int var_5 = 816465011U;
unsigned long long int var_9 = 5534651597612995109ULL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2392130663U;
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
