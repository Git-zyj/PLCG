#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -361902396;
_Bool var_2 = (_Bool)1;
int var_4 = 1708128105;
unsigned long long int var_11 = 15896575181666608803ULL;
int zero = 0;
unsigned int var_13 = 360682436U;
unsigned int var_14 = 1721112240U;
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
