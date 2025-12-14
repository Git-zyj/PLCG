#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 932138382U;
signed char var_2 = (signed char)-6;
int var_9 = 148613119;
signed char var_10 = (signed char)-75;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5519967627707270593ULL;
void init() {
}

void checksum() {
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
