#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4969064120104072786LL;
unsigned int var_3 = 3262123327U;
unsigned int var_4 = 3331119531U;
int var_7 = 275712070;
unsigned long long int var_11 = 2480839734854651587ULL;
int zero = 0;
unsigned int var_12 = 2570747534U;
int var_13 = 874398783;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
