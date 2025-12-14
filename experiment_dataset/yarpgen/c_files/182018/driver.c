#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4170357824U;
int var_2 = 1059183050;
unsigned long long int var_4 = 7307500872170560391ULL;
unsigned long long int var_5 = 8318303020802730269ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned int var_11 = 307647887U;
unsigned int var_12 = 214572595U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
