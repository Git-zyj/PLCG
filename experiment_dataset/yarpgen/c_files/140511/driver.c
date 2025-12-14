#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2188922806347533212ULL;
short var_2 = (short)23215;
int var_5 = -72515298;
unsigned long long int var_9 = 15985922300575827728ULL;
int zero = 0;
short var_11 = (short)25717;
unsigned long long int var_12 = 7566247949955084981ULL;
short var_13 = (short)25517;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
