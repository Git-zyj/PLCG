#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3566319859U;
unsigned int var_6 = 3938413737U;
long long int var_7 = 5823127217010348719LL;
unsigned int var_9 = 1921555347U;
int zero = 0;
long long int var_10 = -7144337590068227424LL;
unsigned short var_11 = (unsigned short)34921;
long long int var_12 = 3713710904285785885LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
