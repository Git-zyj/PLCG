#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = -1583141655809779398LL;
int var_19 = 1322391903;
int zero = 0;
unsigned char var_20 = (unsigned char)216;
unsigned long long int var_21 = 7734652069220282982ULL;
long long int var_22 = 660881587938123940LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
