#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1137559883;
unsigned long long int var_2 = 1059441284876047829ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
int var_9 = -918561232;
int zero = 0;
int var_11 = 614956459;
unsigned long long int var_12 = 18441736942483553847ULL;
int var_13 = -1812058381;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
